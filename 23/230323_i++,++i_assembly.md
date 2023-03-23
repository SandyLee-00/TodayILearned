### i++ ++i Assembly Code

```nasm
// int result = ++i;
mov         eax,dword ptr [i]
inc         eax
mov         dword ptr [i],eax
mov         eax,dword ptr [i]
mov         dword ptr [result],eax

// int result_j = j++;
mov         eax,dword ptr [j]
mov         dword ptr [result_j],eax
mov         eax,dword ptr [j]
inc         eax
mov         dword ptr [j],eax
```

Human error를 줄이려면 ++i를 사용해야한다
