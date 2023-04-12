package com.jiuye.a02staticdemo01;

public class Test {
    public static void main(String[] args) {
        RedDll rd = new RedDll();
        rd.eat();
        rd.drink();
        rd.catchMouse();
        System.out.println("--------");

        Husky h = new Husky();
        h.eat();
        h.drink();
        h.lookHome();
        h.breakHouse();
    }
}
