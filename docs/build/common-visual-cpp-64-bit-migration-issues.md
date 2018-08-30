---
title: Problemi comuni della migrazione a 64 bit di Visual C++ | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- 64-bit programming [C++], migration
- 64-bit compiler [C++], migration
- porting 32-bit code to 64-bit code
- upgrading Visual C++ applications, 32-bit code
- migration [C++], 64-bit code issues
- 32-bit code porting [C++]
- 64-bit applications [C++]
- 64-bit compiler [C++], porting 32-bit code
- Win64 [C++]
ms.assetid: d17fb838-7513-4e2d-8b27-a1666f17ad76
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: fadc3d48eb6ba812415cbedc9c077e7ffc1b4016
ms.sourcegitcommit: 9a0905c03a73c904014ec9fd3d6e59e4fa7813cd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/29/2018
ms.locfileid: "43208158"
---
# <a name="common-visual-c-64-bit-migration-issues"></a>Problemi comuni relativi alla migrazione di Visual C++ a 64 bit

Quando si usa Visual C++ per creare applicazioni da eseguire su un sistema operativo Windows a 64 bit, è opportuno tenere presente quanto segue:  
  
-   Nei sistemi operativi Windows a 64 bit gli oggetti `int` e `long` sono valori a 32 bit.  Per i programmi che si prevede di compilare per le piattaforme a 64 bit, assicurarsi di non assegnare puntatori alle variabili a 32 bit. Nelle piattaforme a 64 bit i puntatori sono valori a 64 bit e, se vengono assegnati a una variabile a 32 bit, il valore del puntatore verrà troncato.  
  
-   `size_t`, `time_t`, e `ptrdiff_t` sono valori a 64 bit nei sistemi operativi Windows a 64 bit.  
  
-   Nei sistemi operativi Windows a 32 bit, `time_t` è un valore a 32 bit nelle versioni di Visual C++ antecedenti a Visual C++ 2005. `time_t` è ora un valore Integer a 64 bit per impostazione predefinita. Per altre informazioni, vedere [gestione del tempo](../c-runtime-library/time-management.md).  
  
     È consigliabile controllare attentamente le parti di codice in cui un valore `int` viene elaborato come valore `size_t` o `time_t`. È possibile che il numero diventi maggiore di un numero a 32 bit e che i dati vengano troncati quando il numero viene riassegnato alla variabile `int`.   
  
Il modificatore `int` (formato esadecimale di `printf`) non funzionerà nel modo previsto nei sistemi operativi Windows a 64 bit. Infatti, avrà effetto solo sui primi 32 bit del valore passato.  
  
-   Usare %I32x per visualizzare un tipo integrale a 32 bit in formato esadecimale.  
  
-   Usare %I64x per visualizzare un tipo integrale a 64 bit in formato esadecimale.  
  
-   Il modificatore %p (formato esadecimale di un puntatore) funziona nel modo previsto nei sistemi operativi Windows a 64 bit.  
  
Per altre informazioni, vedere:  
  
-   [Opzioni del compilatore](../build/reference/compiler-options.md)  
  
-   [Suggerimenti relativi alla migrazione](/windows/desktop/WinProg64/migration-tips)  
  
## <a name="see-also"></a>Vedere anche  

[Configurare Visual C++ per x64 a 64 bit, destinazioni](../build/configuring-programs-for-64-bit-visual-cpp.md)   
[Guida al porting e aggiornamento in Visual C++](../porting/visual-cpp-porting-and-upgrading-guide.md)