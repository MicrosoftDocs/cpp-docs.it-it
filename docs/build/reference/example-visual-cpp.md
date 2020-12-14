---
description: 'Altre informazioni su: &lt; esempio&gt;'
title: '&lt;> di esempio (commenti in formato documentazione C++)'
ms.date: 11/04/2016
f1_keywords:
- <example>
- example
helpviewer_keywords:
- <example> C++ XML tag
- example C++ XML tag
ms.assetid: c821aaa7-7ea7-4bee-9922-6705ad57f877
ms.openlocfilehash: 8ffa51be888fb631db6ec1ecd145177ea346084f
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97200832"
---
# <a name="ltexamplegt"></a>&lt;example&gt;

Il \<example> tag consente di specificare un esempio di come usare un metodo o un altro membro della libreria. In genere, questa operazione comporterebbe anche l'uso del [\<code>](code-visual-cpp.md) tag.

## <a name="syntax"></a>Sintassi

```
<example>description</example>
```

#### <a name="parameters"></a>Parametri

*description*<br/>
Descrizione dell'esempio di codice.

## <a name="remarks"></a>Commenti

Compilare con [/doc](doc-process-documentation-comments-c-cpp.md) per elaborare i commenti relativi alla documentazione in un file.

## <a name="example"></a>Esempio

```cpp
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

[Documentazione XML](xml-documentation-visual-cpp.md)
