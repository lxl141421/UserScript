package com.jiuye.a04polymorphismdemo4;

public class Cat extends Animal{
    public Cat() {
    }

    public Cat(int age, String color) {
        super(age, color);
    }

    @Override
    public void eat(String something) {
        System.out.println(getAge() + "岁" + getColor() + "吃" + something);
    }
    public void eatMouse(){
        System.out.println("吃老鼠");
    }
}
