---
title: Identificatore di classi di archiviazione extern | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-language
ms.topic: language-reference
dev_langs:
- C++
helpviewer_keywords:
- extern keyword [C]
- storage class specifiers, extern
- extern keyword [C], storage class specifier
- external linkage, storage-class specifiers
- external linkage, extern modifier
ms.assetid: 6e16d927-291f-49e4-986c-9d91a482a441
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 08a578514aaf6de4132bd856900b0ec31d31835c
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
ms.locfileid: "32388728"
---
# <a name="extern-storage-class-specifier"></a>Identificatore di classi di archiviazione extern
Una variabile dichiarata con l'identificatore di classe di archiviazione `extern` è un riferimento a una variabile con lo stesso nome, definita a livello esterno in un qualsiasi file di origine del programma. La dichiarazione interna `extern` viene utilizzata per rendere la definizione della variabile a livello esterno visibile all'interno del blocco. Salvo diversamente dichiarato a livello esterno, una variabile dichiarata con la parola chiave `extern` è visibile solo nel blocco in cui è dichiarata.  
  
## <a name="example"></a>Esempio  
 In questo esempio sono illustrate le dichiarazioni a livello interno e a livello esterno:  
  
```  
// extern_StorageClassSpecified.c  
#include <stdio.h>  
  
void other( void );  
  
int main()  
{  
    // Reference to i, defined below:   
    extern int i;  
  
    // Initial value is zero; a is visible only within main:   
    static int a;  
  
    // b is stored in a register, if possible:   
    register int b = 0;  
  
    // Default storage class is auto:   
    int c = 0;  
  
    // Values printed are 1, 0, 0, 0:   
    printf_s( "%d\n%d\n%d\n%d\n", i, a, b, c );  
    other();  
    return;  
}  
  
int i = 1;  
  
void other( void )  
{  
    // Address of global i assigned to pointer variable:  
    static int *external_i = &i;  
  
    // i is redefined; global i no longer visible:   
    int i = 16;  
  
    // This a is visible only within the other function:   
    static int a = 2;  
  
    a += 2;  
    // Values printed are 16, 4, and 1:  
    printf_s( "%d\n%d\n%d\n", i, a, *external_i );  
}  
```  
  
 In questo esempio la variabile `i` è definita a livello esterno con un valore iniziale 1. Una dichiarazione `extern` nella funzione `main` viene utilizzata per dichiarare un riferimento al livello esterno `i`. La variabile **static** `a` viene inizializzata a 0 per impostazione predefinita perché l'inizializzatore viene omesso. La chiamata a `printf` consente di stampare i valori 1, 0, 0 e 0.  
  
 Nella funzione `other` l'indirizzo della variabile globale `i` viene usato per inizializzare la variabile puntatore **static** `external_i`. Questa operazione è possibile perché la variabile globale ha una durata **static**, pertanto il relativo indirizzo rimane invariato durante l'esecuzione del programma. Successivamente, la variabile `i` viene ridefinita come variabile locale con valore iniziale 16. Questa ridefinizione non influisce sul valore di `i` a livello dell'esterno, il quale viene nascosto mediante l'utilizzo di un nome per la variabile locale. Il valore della variabile globale `i` è accessibile solo indirettamente all'interno di questo blocco, mediante il puntatore `external_i`. Il tentativo di assegnare l'indirizzo della variabile **auto** `i` a un puntatore non funziona, poiché potrebbe essere diverso ogni volta in cui viene eseguito l'accesso al blocco. La variabile `a` viene dichiarata come variabile **static** e inizializzata a 2. Questo elemento `a` non è in conflitto con `a` in `main`, poiché le variabili **static** a livello interno sono visibili solo all'interno del blocco in cui sono dichiarate.  
  
 La variabile `a` è maggiore di 2 e restituisce 4 come risultato. Se la funzione `other` venisse chiamata nuovamente nello stesso programma, il valore iniziale `a` sarebbe 4. Le variabili interne **static** mantengono i valori al termine del programma e quindi riaccedono al blocco in cui sono dichiarate.  
  
## <a name="see-also"></a>Vedere anche  
 [Identificatori di classi di archiviazione per dichiarazioni di livello interno](../c-language/storage-class-specifiers-for-internal-level-declarations.md)