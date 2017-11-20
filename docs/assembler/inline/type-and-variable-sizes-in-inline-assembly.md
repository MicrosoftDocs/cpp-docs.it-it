---
title: Tipo e dimensioni variabili in Assembly Inline | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- length
- Type
dev_langs: C++
helpviewer_keywords:
- variables, length
- size, getting in inline assembly
- size
- LENGTH operator
- TYPE operator
- SIZE operator
- inline assembly, operators
- variables, type
- variables, size
ms.assetid: b62c2f2b-a7ad-4145-bae4-d890db86d348
caps.latest.revision: "7"
author: corob-msft
ms.author: corob
manager: ghogen
ms.openlocfilehash: 1714d660cad6474f0b038a40e2ad1efdf5aa5743
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="type-and-variable-sizes-in-inline-assembly"></a>Dimensioni delle variabili e dei tipi in assembly inline
**Sezione specifica Microsoft**  
  
 Il **lunghezza**, **dimensioni**, e **tipo** operatori hanno un significato limitato in assembly inline. Non possono essere utilizzati con l'operatore `DUP` (perché non è possibile definire i dati con direttive o operatori di MASM). Tuttavia, è possibile utilizzarli per determinare la dimensione di variabili o tipi C o C++:  
  
-   Il **lunghezza** operatore può restituire il numero di elementi in una matrice. Restituisce il valore 1 per le variabili non di matrice.  
  
-   Il **dimensioni** operatore può restituire la dimensione di una variabile C o C++. Dimensione di una variabile è il prodotto dei relativi **lunghezza** e **tipo**.  
  
-   Il **tipo** operatore può restituire la dimensione di una variabile o di tipo C o C++. Se la variabile è una matrice, **tipo** restituisce le dimensioni di un singolo elemento della matrice.  
  
 Ad esempio, se il programma dispone di una matrice `int` di 8 elementi,  
  
```  
int arr[8];  
```  
  
 le espressioni assembly e C seguenti impostano la dimensione di `arr` e dei relativi elementi.  
  
|__asm|C|Dimensioni|  
|-------------|-------|----------|  
|**LUNGHEZZA** arr|`sizeof`(arr)/`sizeof`(arr[0])|8|  
|**DIMENSIONI** arr|`sizeof`(arr)|32|  
|**TIPO** arr|`sizeof`(arr[0])|4|  
  
 **Fine sezione specifica Microsoft**  
  
## <a name="see-also"></a>Vedere anche  
 [Uso del linguaggio assembly in blocchi __asm](../../assembler/inline/using-assembly-language-in-asm-blocks.md)