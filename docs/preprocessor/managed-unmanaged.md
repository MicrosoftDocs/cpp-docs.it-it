---
title: Managed, unmanaged | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
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
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 908ed745e82b17dd688f062ac7021c6adf3f4851
ms.sourcegitcommit: d4c803bd3a684d7951bf88dcecf1f14af43ae411
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/10/2018
ms.locfileid: "42540596"
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

Il [/clr](../build/reference/clr-common-language-runtime-compilation.md) opzione del compilatore fornisce il controllo a livello di modulo per la compilazione di funzioni come gestite o non gestito.  
  
Una funzione non gestita verrà compilata per la piattaforma nativa e l'esecuzione di tale parte del programma verrà passata alla piattaforma nativa da Common Language Runtime.  
  
Le funzioni vengono compilate come gestite per impostazione predefinita quando `/clr` viene usato.  
  
Quando si applicano questi pragma:  
  
- Aggiungere il pragma che precede una funzione ma non all'interno del corpo di una funzione.  
  
- Aggiungere il pragma dopo le istruzioni `#include`. Non usare questi pragma prima delle istruzioni `#include`.  
  
Il compilatore ignora la **managed** e **non gestita** pragma se `/clr` non viene usato nella compilazione.  
  
Quando viene creata un'istanza di una funzione di modello, lo stato del pragma al momento della definizione del modello determina se è gestita o non gestita.  
  
Per altre informazioni, vedere [Initialization of Mixed Assemblies](../dotnet/initialization-of-mixed-assemblies.md).  
  
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