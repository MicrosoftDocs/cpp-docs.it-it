---
title: '&lt;param > (commenti relativi alla documentazione di C++)'
ms.date: 11/04/2016
f1_keywords:
- param
- <param>
helpviewer_keywords:
- param C++ XML tag
- <param> C++ XML tag
ms.assetid: 66c1a1c3-4f98-4bcf-8c7d-9a40308982fb
ms.openlocfilehash: d8ea4feddbe1ec2d5898f8ef698cc2d69d255933
ms.sourcegitcommit: 8105b7003b89b73b4359644ff4281e1595352dda
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/14/2019
ms.locfileid: "57826639"
---
# <a name="ltparamgt"></a>&lt;param&gt;

Il tag \<param> viene usato nel commento di una dichiarazione di metodo per descrivere uno dei parametri del metodo.

## <a name="syntax"></a>Sintassi

```
<param name='name'>description</param>
```

#### <a name="parameters"></a>Parametri

*name*<br/>
Nome di un parametro di metodo.  Racchiudere il nome tra virgolette singole o doppie.  Il compilatore genera un avviso se non trova `name`.

*description*<br/>
Descrizione del parametro.

## <a name="remarks"></a>Note

Il testo del tag \<param> verrà visualizzato in IntelliSense, nel [Visualizzatore oggetti](/visualstudio/ide/viewing-the-structure-of-code) e nel report Web sui commenti del codice.

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

[Documentazione di XML](xml-documentation-visual-cpp.md)
