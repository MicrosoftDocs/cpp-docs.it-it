---
title: 'Errore: overflow del buffer globale'
description: Esempi di origine e schermate di debug in tempo reale per errori di overflow di variabili globali.
ms.date: 03/02/2021
f1_keywords:
- global-buffer-overflow
helpviewer_keywords:
- global-buffer-overflow error
- AddressSanitizer error global-buffer-overflow
ms.openlocfilehash: cdc637318c523d43684f938df51030ec803a754b
ms.sourcegitcommit: 6ed44d9c3fb32e965e363b9c69686739a90a2117
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/08/2021
ms.locfileid: "102470522"
---
# <a name="error-global-buffer-overflow"></a>Errore: `global-buffer-overflow`

> Errore igienizzatore Indirizzo: overflow del buffer globale

Il compilatore genera i metadati per qualsiasi variabile nelle `.data` `.bss` sezioni o. Queste variabili hanno un ambito di linguaggio globale o file statico. Vengono allocate in memoria prima dell' `main()` avvio. Le variabili globali in C vengono gestite in modo molto diverso rispetto a C++. Questa differenza è dovuta alle regole complesse per il collegamento di C.

In C una variabile globale può essere dichiarata in diversi file di origine e ogni definizione può avere tipi diversi. Il compilatore non può visualizzare contemporaneamente tutte le definizioni possibili, ma il linker può. Per C, per impostazione predefinita il linker seleziona la variabile di dimensioni maggiori da tutte le diverse dichiarazioni.

In C++, un oggetto globale viene allocato dal compilatore. Può essere presente una sola definizione, quindi la dimensione di ogni definizione è nota in fase di compilazione.

## <a name="example---globals-in-c-with-multiple-type-definitions"></a>Esempio-Globals in ' c'con più definizioni di tipo

```cpp
// file: a.c
int x;
```

```cpp
// file: b.c
char* x;
```

```cpp
// file: c.c
float* x[3];
```

```cpp
// file: example1-main.c
// global-buffer-overflow error

// AddressSanitizer reports a buffer overflow at the first line
// in function main() in all cases, REGARDLESS of the order in 
// which the object files: a.obj, b.obj, and c.obj are linked.
  
double x[5];
 
int main() { 
    int rc = (int) x[5];  // Boom!
    return rc; 
}
```

Per compilare e testare questo esempio, eseguire questi comandi in un [prompt dei comandi](../build/building-on-the-command-line.md#developer_command_prompt_shortcuts)per gli sviluppatori di Visual Studio 2019 versione 16,9 o successiva:

```cmd
cl a.c b.c c.c example1-main.c /fsanitize=address /Zi
devenv /debugexe example1-main.exe
```

### <a name="resulting-error"></a>Errore risultante

:::image type="content" source="media/global-overflow-example-1.png" alt-text="Screenshot del debugger che Visualizza l'errore di overflow globale del buffer nell'esempio 1.":::

## <a name="example---simple-function-level-static"></a>Esempio: statico a livello di funzione semplice

```cpp
// example2.cpp
// global-buffer-overflow error
#include <string.h>

int 
main(int argc, char **argv) {

    static char XXX[10];
    static char YYY[10];
    static char ZZZ[10];

    memset(XXX, 0, 10); memset(YYY, 0, 10); memset(ZZZ, 0, 10);

    int res = YYY[argc * 10];  // Boom!

    res += XXX[argc] + ZZZ[argc];
    return res;
}
```

Per compilare e testare questo esempio, eseguire questi comandi in un [prompt dei comandi](../build/building-on-the-command-line.md#developer_command_prompt_shortcuts)per gli sviluppatori di Visual Studio 2019 versione 16,9 o successiva:

```cmd
cl example2.cpp /fsanitize=address /Zi
devenv /debugexe example2.exe
```

### <a name="resulting-error---simple-function-level-static"></a>Errore risultante-statico a livello di funzione semplice

:::image type="content" source="media/global-overflow-example-2.png" alt-text="Screenshot del debugger che Visualizza l'errore di overflow globale del buffer nell'esempio 2.":::

## <a name="example---all-global-scopes-in-c"></a>Esempio: tutti gli ambiti globali in C++

```cpp
// example3.cpp
// global-buffer-overflow error

// Run 4 different ways with the choice of one of these options:
//
// -g : Global
// -c : File static
// -f : Function static
// -l : String literal

#include <string.h>

struct C {
    static int array[10];
};

// normal global
int global[10];

// class static
int C::array[10];

int main(int argc, char **argv) {

    int one = argc - 1;

    switch (argv[1][1]) {
    case 'g': return global[one * 11];     //Boom! simple global
    case 'c': return C::array[one * 11];   //Boom! class static
    case 'f':
        static int array[10];
        memset(array, 0, 10);
        return array[one * 11];            //Boom! function static
    case 'l':
        // literal global ptr created by compiler
        const char *str = "0123456789";
        return str[one * 11];              //Boom! .rdata string literal allocated by compiler
    }
    return 0;
}
```

Per compilare e testare questo esempio, eseguire questi comandi in un [prompt dei comandi](../build/building-on-the-command-line.md#developer_command_prompt_shortcuts)per gli sviluppatori di Visual Studio 2019 versione 16,9 o successiva:

```cmd
cl example3.cpp /fsanitize=address /Zi
devenv /debugexe example3.exe -l
```

### <a name="resulting-error---all-global-scopes-in-c"></a>Errore risultante-tutti gli ambiti globali in C++

:::image type="content" source="media/global-overflow-example-3.png" alt-text="Screenshot del debugger che Visualizza l'errore di overflow globale del buffer nell'esempio 3.":::

## <a name="see-also"></a>Vedi anche

[Panoramica di AddressSanitizer](./asan.md)\
[Problemi noti di AddressSanitizer](./asan-known-issues.md)\
[Riferimenti per il linguaggio e la compilazione AddressSanitizer](./asan-building.md)\
[Riferimento runtime AddressSanitizer](./asan-runtime.md)\
[AddressSanitizer Shadow byte](./asan-shadow-bytes.md)\
[AddressSanitizer cloud o test distribuiti](./asan-offline-crash-dumps.md)\
[Integrazione del debugger AddressSanitizer](./asan-debugger-integration.md)\
[Esempi di errore AddressSanitizer](./asan-error-examples.md)
