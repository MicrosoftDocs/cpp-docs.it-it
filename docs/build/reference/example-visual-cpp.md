---
title: '&lt;esempio > (commenti relativi alla documentazione di C++)'
ms.date: 11/04/2016
f1_keywords:
- <example>
- example
helpviewer_keywords:
- <example> C++ XML tag
- example C++ XML tag
ms.assetid: c821aaa7-7ea7-4bee-9922-6705ad57f877
ms.openlocfilehash: 69e4ad8315948c9c77e99f6ebece4debbe3831b5
ms.sourcegitcommit: 8105b7003b89b73b4359644ff4281e1595352dda
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/14/2019
ms.locfileid: "57826619"
---
# <a name="ltexamplegt"></a>&lt;example&gt;

Il tag \<example> consente di specificare un esempio di come usare un metodo o un altro membro della libreria. Ciò comporta in genera anche il ricorso al tag [\<code>](code-visual-cpp.md).

## <a name="syntax"></a>Sintassi

```
<example>description</example>
```

#### <a name="parameters"></a>Parametri

*description*<br/>
Descrizione dell'esempio di codice.

## <a name="remarks"></a>Note

Compilare con [/doc](doc-process-documentation-comments-c-cpp.md) per elaborare i commenti relativi alla documentazione in un file.

## <a name="example"></a>Esempio

```
// xml_example_tag.cpp
// compile with: /clr /doc /LD
// post-build command: xdcmake xml_example_tag.dll

/// Text for class MyClass.
public ref class MyClass {
public:
   /// <summary>
   /// GetZero method
   /// </summary>
   /// <example> This sample shows how to call the GetZero method.
   /// <code>
   /// int main()
   /// {
   ///    return GetZero();
   /// }
   /// </code>
   /// </example>
   static int GetZero() {
      return 0;
   }
};
```

## <a name="see-also"></a>Vedere anche

[Documentazione di XML](xml-documentation-visual-cpp.md)
