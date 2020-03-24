---
title: Avviso del compilatore (livello 1) C4692
ms.date: 11/04/2016
f1_keywords:
- C4692
helpviewer_keywords:
- C4692
ms.assetid: f6fb3acc-8228-491a-9c30-ce302d8a9c75
ms.openlocfilehash: 0e8e951d5ea50cc755d26616cf23e48c27b2ca84
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80175363"
---
# <a name="compiler-warning-level-1-c4692"></a>Avviso del compilatore (livello 1) C4692

'funzione': la firma del membro non privato contiene il tipo nativo privato 'tipo_nativo' dell'assembly

Un tipo che è visibile all'esterno dell'assembly contiene una funzione membro la cui firma contiene un tipo nativo che non è visibile all'esterno dell'assembly. Pertanto, la funzione membro non deve essere chiamata se viene creata un'istanza del relativo tipo contenitore all'esterno dell'assembly.

Per ulteriori informazioni, vedere [visibilità dei tipi](../../dotnet/how-to-define-and-consume-classes-and-structs-cpp-cli.md#BKMK_Type_visibility).

Per impostazione predefinita, questo avviso non è attivo. Per altre informazioni, vedere [Compiler Warnings That Are Off by Default](../../preprocessor/compiler-warnings-that-are-off-by-default.md).

## <a name="example"></a>Esempio

L'esempio seguente genera l'C4692.

```cpp
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
