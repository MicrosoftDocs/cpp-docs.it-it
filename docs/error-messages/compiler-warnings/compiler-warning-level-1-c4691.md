---
title: Compilatore avviso (livello 1) C4691 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C4691
dev_langs:
- C++
helpviewer_keywords:
- C4691
ms.assetid: 722133d9-87f6-46c1-9e86-9825453d6999
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 9dccce2468c83dd7d14596c1c26e19bd13ad1a70
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33282597"
---
# <a name="compiler-warning-level-1-c4691"></a>Avviso del compilatore (livello 1) C4691
'type': tipo di riferimento previsto nell'assembly senza riferimenti 'file', tipo definito in unità di conversione corrente utilizzato  
  
 Il file di metadati che contiene la definizione del tipo originale non viene fatto riferimento e il compilatore Usa una definizione di tipo locale.  
  
 Nel caso in cui la ricompilazione *file*, C4691 possono essere ignorati o disattivato il pragma [avviso](../../preprocessor/warning.md).  Se il file che si sta compilando corrisponde al file in cui il compilatore prevede di trovare la definizione di tipo, vale a dire, è possibile ignorare C4691.  
  
 Tuttavia, possono verificarsi comportamenti imprevisti se il compilatore utilizza una definizione che non è allo stesso assembly a cui fa riferimento nei metadati. Tipi CLR sono tipizzati non solo per il nome del tipo, ma anche l'assembly.  Un tipo Z di DLL di assembly è diverso da un tipo Z di assembly y.  
  
## <a name="example"></a>Esempio  
 In questo esempio contiene la definizione del tipo originale.  
  
```  
// C4691_a.cpp  
// compile with: /clr /LD /W1  
public ref class Original_Type {};  
```  
  
## <a name="example"></a>Esempio  
 In questo esempio fa riferimento a C4691_a. dll e dichiara un campo di tipo Original_Type.  
  
```  
// C4691_b.cpp  
// compile with: /clr /LD  
#using "C4691_a.dll"  
public ref class Client {  
public:  
   Original_Type^ ot;  
};  
```  
  
## <a name="example"></a>Esempio  
 L'esempio seguente genera l'errore C4691.  Si noti in questo esempio include una definizione per Original_Type e non fa riferimento a C4691a.  
  
 Per risolvere, fare riferimento al file di metadati che contiene la definizione del tipo originale e rimuovere la dichiarazione locale e la definizione.  
  
```  
// C4691_c.cpp  
// compile with: /clr /LD /W1  
// C4691 expected  
  
// Uncomment the following line to resolve.  
// #using "C4691_a.dll"  
#using "C4691_b.dll"  
  
// Delete the following line to resolve.  
ref class Original_Type;  
  
public ref class MyClass : Client {};  
```