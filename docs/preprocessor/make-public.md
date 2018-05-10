---
title: make_public | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: reference
f1_keywords:
- vc-pragma.make_public
- make_public_CPP
dev_langs:
- C++
helpviewer_keywords:
- pragmas, make_public
- make_public pragma
ms.assetid: c3665f4d-268a-4932-9661-c37c8ae6a341
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 27db5ac934973178e2485327090ed70f994becec
ms.sourcegitcommit: d55ac596ba8f908f5d91d228dc070dad31cb8360
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/07/2018
---
# <a name="makepublic"></a>make_public
Indica che un tipo nativo deve avere accessibilità pubblica dell'assembly.  
  
## <a name="syntax"></a>Sintassi  
  
```  
#pragma make_public(type)  
```  
  
### <a name="parameters"></a>Parametri  
 `type` è il nome del tipo per cui si desidera disporre di accessibilità pubblica dell'assembly.  
  
## <a name="remarks"></a>Note  
`make_public` è utile per quando il tipo nativo cui si desidera fare riferimento ha origine da un file h che non è possibile modificare. Se si desidera utilizzare il tipo nativo nella firma di una funzione pubblica in un tipo con visibilità pubblica dell'assembly, il tipo nativo deve disporre anche di accessibilità pubblica dell'assembly o il compilatore genererà un avviso.  
  
`make_public` deve essere specificato in ambito globale ed è attivo solo dal punto in cui viene dichiarato fino alla fine del file di codice sorgente.  
  
Il tipo nativo potrebbe essere in modo implicito o esplicito privato. vedere [visibilità del tipo](../dotnet/how-to-define-and-consume-classes-and-structs-cpp-cli.md#BKMK_Type_visibility) per ulteriori informazioni.  
  
## <a name="example"></a>Esempio  
Nell'esempio seguente viene illustrato il contenuto di un file h contenente le definizioni per due struct nativi.  
  
```cpp  
// make_public_pragma.h  
struct Native_Struct_1 { int i; };  
struct Native_Struct_2 { int i; };  
```  
  
## <a name="example"></a>Esempio  
Nell'esempio di codice seguente viene utilizzato il file di intestazione e viene indicato che, se gli struct nativi non vengono contrassegnati in modo esplicito come pubblici, utilizzando `make_public`, il compilatore genererà un avviso durante il tentativo di utilizzo degli struct nativi nella firma della funzione pubblica di un tipo gestito pubblico.  
  
```cpp  
// make_public_pragma.cpp  
// compile with: /c /clr /W1  
#pragma warning (default : 4692)  
#include "make_public_pragma.h"  
#pragma make_public(Native_Struct_1)  
  
public ref struct A {  
   void Test(Native_Struct_1 u) {u.i = 0;}   // OK  
   void Test(Native_Struct_2 u) {u.i = 0;}   // C4692  
};  
```  
  
## <a name="see-also"></a>Vedere anche  
[Direttive pragma e parola chiave __Pragma](../preprocessor/pragma-directives-and-the-pragma-keyword.md)