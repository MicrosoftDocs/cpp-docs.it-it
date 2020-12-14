---
description: 'Altre informazioni su: &lt; param&gt;'
title: '&lt;param> (commenti in formato documentazione C++)'
ms.date: 11/04/2016
f1_keywords:
- param
- <param>
helpviewer_keywords:
- param C++ XML tag
- <param> C++ XML tag
ms.assetid: 66c1a1c3-4f98-4bcf-8c7d-9a40308982fb
ms.openlocfilehash: 7c3baabc6aef9a4cabdd7c7a9023fb628bd53793
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97226142"
---
# <a name="ltparamgt"></a>&lt;param&gt;

Il \<param> tag deve essere usato nel commento per una dichiarazione di metodo per descrivere uno dei parametri per il metodo.

## <a name="syntax"></a>Sintassi

```
<param name='name'>description</param>
```

#### <a name="parameters"></a>Parametri

*nome*<br/>
Nome di un parametro di metodo.  Racchiudere il nome tra virgolette singole o doppie.  Il compilatore genera un avviso se non trova `name`.

*description*<br/>
Descrizione del parametro.

## <a name="remarks"></a>Commenti

Il testo del \<param> tag verrà visualizzato in IntelliSense, nel [Visualizzatore oggetti](/visualstudio/ide/viewing-the-structure-of-code)e nel report Web di commenti sul codice.

Compilare con [/doc](doc-process-documentation-comments-c-cpp.md) per elaborare i commenti relativi alla documentazione in un file.

## <a name="example"></a>Esempio

```cpp
// xml_param_tag.cpp
// compile with: /clr /doc /LD
// post-build command: xdcmake xml_param_tag.dll
/// Text for class MyClass.
public ref class MyClass {
   /// <param name="Int1">Used to indicate status.</param>
   void MyMethod(int Int1) {
   }
};
```

## <a name="see-also"></a>Vedere anche

[Documentazione XML](xml-documentation-visual-cpp.md)
