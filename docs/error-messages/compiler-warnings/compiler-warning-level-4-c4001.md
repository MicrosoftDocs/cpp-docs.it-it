---
title: Compilatore (livello 4) avviso C4001 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords: C4001
dev_langs: C++
helpviewer_keywords: C4001
ms.assetid: 414a47fe-d597-425e-9374-6a569231dc0a
caps.latest.revision: "7"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 3b5c3d82bef81ee84514b39a0ce8ab07ad6e6c36
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="compiler-warning-level-4-c4001"></a>Compilatore (livello 4) avviso C4001
utilizzata estensione non standard 'commento a riga singola' è stata utilizzata  

> [!NOTE] 
> Questo avviso è stata rimossa in Visual Studio 2017 versione 15,5 perché commenti a riga singola sono standard C99.
  
 Commenti a riga singola sono standard in C++ e C a partire da C99 standard. In compatibilità ANSI ([/Za](../../build/reference/za-ze-disable-language-extensions.md)), i file di C che contengono commenti a riga singola, generano l'avviso C4001 a causa dell'utilizzo di un'estensione non standard. Poiché i commenti a riga singola sono standard in C++, file di C contenenti commenti a riga singola non producono C4001 durante la compilazione con estensioni Microsoft (/Ze).  
  
## <a name="example"></a>Esempio  
 Per disabilitare l'avviso, rimuovere il commento [#pragma warning(disable:4001)](../../preprocessor/warning.md).  
  
```  
// C4001.cpp  
// compile with: /W4 /Za /TC  
// #pragma warning(disable:4001)  
int main()  
{  
   // single-line comment in main  
   // C4001  
}  
```