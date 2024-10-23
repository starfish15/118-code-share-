#对空洞小骑士的设计
#类设计（包含受伤，回复，攻击回蓝，角色死亡）
class GamePlayer:
    def __init__(self):
       print("\nGame Start")
    def injury(self,current_hp):
        current_hp = current_hp - 1
        print("\nNow your hp is",current_hp)
        return current_hp
    def damage_success(self,current_mp,max_mp):
        if (current_mp < max_mp):
            current_mp += 0.2
            return current_mp
    def recover(self,current_hp,current_mp,max_hp,max_mp):
        current_hp = max_hp
        current_mp = max_mp
        print("\nNow you are fine")
        return current_hp,current_mp
    def rest(self,current_hp,current_mp,max_hp):
        if (current_hp < max_hp and current_mp >= 1):
            current_hp += 1
            current_mp -= 1
        else :
            print("\n\t      error!")
        print("\nNow your hp is ",current_hp," and your mp is",current_mp)
        return current_hp,current_mp
    def die(self):
        print("\nGameover")

#下面我目前认知范围内的运行测试
max_hp = 5
max_mp = 3
current_hp = max_hp
current_mp = max_mp
small_knight = GamePlayer()
current_hp = small_knight.injury(current_hp)
current_hp = small_knight.injury(current_hp)
current_hp,current_mp = small_knight.recover(current_hp,current_mp,max_hp,max_mp)
current_hp,current_mp = small_knight.rest(current_hp,current_mp,max_hp)
current_hp = small_knight.injury(current_hp)
current_hp,current_mp = small_knight.rest(current_hp,current_mp,max_hp)
current_hp = 1
current_mp = 0
#Change role's hp,mp to 1,0
print("\nChange role\'s hp,mp to 1,0")
current_hp,current_mp = small_knight.rest(current_hp,current_mp,max_hp)
current_mp = small_knight.damage_success(current_mp,max_mp)
current_hp,current_mp = small_knight.rest(current_hp,current_mp,max_hp)
small_knight.die()
print("请看源代码")
print("Press \"Enter\" to end the programe")
a = input("")