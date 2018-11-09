---
title: '&lt;example&gt; (Visual C++)'
ms.date: 11/04/2016
f1_keywords:
- <example>
- example
helpviewer_keywords:
- <example> C++ XML tag
- example C++ XML tag
ms.assetid: c821aaa7-7ea7-4bee-9922-6705ad57f877
ms.openlocfilehash: 6fb6a83a170cfcf3e394ac8b0b15af869d6e59fb
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50641636"
---
# <a name="ltexamplegt-visual-c"></a>&lt;example&gt; (Visual C++)

Il tag \<example> consente di specificare un esempio di come usare un metodo o un altro membro della libreria. Ciò comporta in genera anche il ricorso al tag [\<code>](../ide/code-visual-cpp.md).

## <a name="syntax"></a>Sintassi

```
<example>description</example>
```

#### <a name="parameters"></a>Parametri

*description*<br/>
Descrizione dell'esempio di codice.

## <a name="remarks"></a>Note

Compilare con [/doc](../build/reference/doc-process-documentation-comments-c-cpp.md) per elaborare i commenti relativi alla documentazione in un file.

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

[Documentazione di XML](../ide/xml-documentation-visual-cpp.md)