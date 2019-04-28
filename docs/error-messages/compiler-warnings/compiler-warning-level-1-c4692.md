---
title: Avviso del compilatore (livello 1) C4692
ms.date: 11/04/2016
f1_keywords:
- C4692
helpviewer_keywords:
- C4692
ms.assetid: f6fb3acc-8228-491a-9c30-ce302d8a9c75
ms.openlocfilehash: d013990d0d56c028f48928d1b48c2e0a66b393af
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62221266"
---
# <a name="compiler-warning-level-1-c4692"></a>Avviso del compilatore (livello 1) C4692

'funzione': la firma del membro non privato contiene il tipo nativo privato 'tipo_nativo' dell'assembly

Un tipo che è visibile all'esterno dell'assembly contiene una funzione membro la cui firma contiene un tipo nativo che non è visibile all'esterno dell'assembly. Pertanto, la funzione membro non deve essere chiamata se viene creata un'istanza di tipo che li contiene all'esterno dell'assembly.

Per altre informazioni, vedere [digitare la visibilità](../../dotnet/how-to-define-and-consume-classes-and-structs-cpp-cli.md#BKMK_Type_visibility).

Per impostazione predefinita, questo avviso non è attivo. Per altre informazioni, vedere [Compiler Warnings That Are Off by Default](../../preprocessor/compiler-warnings-that-are-off-by-default.md).

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore C4692.

```
// C4692.cpp
// compile with: /W1 /c /clr
#pragma warning(default:4692)
class Private_Native_Class {};
public class Public_Native_Class {};
public ref class Public_Ref_Class {
public:
   void Test(Private_Native_Class *) {}   // C4692
   void Test2(Public_Native_Class *) {}   // OK
};
```