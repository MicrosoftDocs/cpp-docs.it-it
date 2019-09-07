---
title: Enumerazioni (C++/CX)
ms.date: 12/30/2016
ms.assetid: 99fbbe28-c1cd-43af-9ead-60f90eba6e68
ms.openlocfilehash: 3bdcff03872dcfe83f0be5752cec4f567fbc6b72
ms.sourcegitcommit: 180f63704f6ddd07a4172a93b179cf0733fd952d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/06/2019
ms.locfileid: "70740217"
---
# <a name="enums-ccx"></a>Enumerazioni (C++/CX)

C++/CX supporta la `public enum class` parola chiave, che è analogo a uno C++ `scoped  enum`standard. Quando utilizzi un enumeratore dichiarato tramite la parola chiave `public enum class` , è necessario che utilizzi l'identificatore di enumerazione per limitare l'ambito di ogni valore dell'enumeratore.

### <a name="remarks"></a>Note

Un oggetto `public enum class` che non dispone di un identificatore di accesso, ad esempio `public`, viene considerata un' [enumerazione con ambito](../cpp/enumerations-cpp.md)C++ standard.

Una `public enum class` Dichiarazione `public enum struct` o può avere un tipo sottostante di qualsiasi tipo integrale sebbene il Windows Runtime stesso richieda che il tipo sia Int32 o UInt32 per un'enumerazione Flags. Nella sintassi seguente vengono descritte le parti di `public enum class` o di `public enum struct`.

Nell'esempio riportato di seguito viene mostrato come definire una classe enum pubblica:

[!code-cpp[cx_enums#01](../cppcx/codesnippet/CPP/cpp/class1.h#01)]

In questo esempio viene mostrato come utilizzarla:

[!code-cpp[cx_enums#02](../cppcx/codesnippet/CPP/cpp/class1.h#02)]

### <a name="examples"></a>Esempi

Negli esempi successivi viene illustrato come dichiarare un'enumerazione.

[!code-cpp[cx_enums#03](../cppcx/codesnippet/CPP/cpp/class1.h#03)]

Nell'esempio riportato di seguito viene illustrato come eseguire il cast agli equivalenti numerici e come eseguire confronti. Nota che l'utilizzo dell'enumeratore `One` è limitato di ambito dall'identificatore di enumerazione `Enum1` e l'enumeratore `First` è limitato di ambito da `Enum2`.

[!code-cpp[cx_enums#04](../cppcx/codesnippet/CPP/cpp/class1.h#04)]

## <a name="see-also"></a>Vedere anche

[Sistema di tipi](../cppcx/type-system-c-cx.md)<br/>
[Riferimenti al linguaggio C++/CX](../cppcx/visual-c-language-reference-c-cx.md)<br/>
[Riferimenti a spazi dei nomi](../cppcx/namespaces-reference-c-cx.md)
