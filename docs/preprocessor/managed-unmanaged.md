---
title: Managed, unmanaged | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- vc-pragma.unmanaged
- managed_CPP
- unmanaged_CPP
- vc-pragma.managed
dev_langs:
- C++
helpviewer_keywords:
- managed pragma
- pragmas, unmanaged
- pragmas, managed
- unmanaged pragma
ms.assetid: f072ddcc-e1ec-408a-8ce1-326ddb60e4a4
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: bc7e86e053cec68a3a25c753b7c3b7fb8ab50363
ms.sourcegitcommit: d51ed21ab2b434535f5c1d553b22e432073e1478
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/23/2018
---
# <a name="managed-unmanaged"></a>managed, unmanaged
Abilitare il controllo a livello di funzione per la compilazione di funzioni come gestite o non gestite.  
  
## <a name="syntax"></a>Sintassi  
  
```  
  
      #pragma managed  
#pragma unmanaged  
#pragma managed([push,] on | off)  
#pragma managed(pop)  
```  
  
## <a name="remarks"></a>Note  
 Il [/clr](../build/reference/clr-common-language-runtime-compilation.md) l'opzione del compilatore fornisce il controllo a livello di modulo per la compilazione di funzioni come gestite o non gestito.  
  
 Una funzione non gestita verrà compilata per la piattaforma nativa e l'esecuzione di tale parte del programma verrà passata alla piattaforma nativa da Common Language Runtime.  
  
 Le funzioni vengono compilate come gestite per impostazione predefinita quando **/clr** viene utilizzato.  
  
 Quando si applicano questi pragma:  
  
-   Aggiungere il pragma che precede una funzione ma non all'interno del corpo di una funzione.  
  
-   Aggiungere il pragma dopo le istruzioni `#include`. Non usare questi pragma prima delle istruzioni `#include`.  
  
 Il compilatore ignora la `managed` e `unmanaged` pragma se **/clr** non viene utilizzata nella compilazione.  
  
 Quando viene creata un'istanza di una funzione di modello, lo stato del pragma al momento della definizione del modello determina se è gestita o non gestita.  
  
 Per ulteriori informazioni, vedere [inizializzazione di assembly misti](../dotnet/initialization-of-mixed-assemblies.md).  
  
## <a name="example"></a>Esempio  
  
```cpp  
// pragma_directives_managed_unmanaged.cpp  
// compile with: /clr  
#include <stdio.h>  
  
// func1 is managed  
void func1() {  
   System::Console::WriteLine("In managed function.");  
}  
  
// #pragma unmanaged  
// push managed state on to stack and set unmanaged state  
#pragma managed(push, off)  
  
// func2 is unmanaged  
void func2() {  
   printf("In unmanaged function.\n");  
}  
  
// #pragma managed  
#pragma managed(pop)  
  
// main is managed  
int main() {  
   func1();  
   func2();  
}  
```  
  
```Output  
In managed function.  
In unmanaged function.  
```  
  
## <a name="see-also"></a>Vedere anche  
 [Direttive pragma e parola chiave __Pragma](../preprocessor/pragma-directives-and-the-pragma-keyword.md)