---
title: '&lt;includere > (commenti relativi alla documentazione di C++)'
ms.date: 11/04/2016
f1_keywords:
- include
- <include>
helpviewer_keywords:
- include C++ XML tag
- <include> C++ XML tag
ms.assetid: 392a3e61-0371-4617-8362-446650876ce3
ms.openlocfilehash: b7d1033aa5b6c95c0db8eb9debf74596dc214fb0
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62291327"
---
# <a name="ltincludegt"></a>&lt;include&gt;

Il tag \<include> consente di fare riferimento ai commenti di un altro file per la descrizione dei tipi e dei membri del codice sorgente, eliminando la necessità di inserire i commenti relativi alla documentazione direttamente nel file del codice sorgente.  Ad esempio, è possibile usare \<include> per inserire commenti "boilerplate" standard che vengono usati in tutto il team o la società.

## <a name="syntax"></a>Sintassi

```
<include file='filename' path='tagpath' />
```

#### <a name="parameters"></a>Parametri

*filename*<br/>
Nome del file che contiene la documentazione. È possibile qualificare il nome del file con un percorso.  Racchiudere il nome tra virgolette singole o doppie.  Il compilatore genera un avviso se non trova `filename`.

*tagpath*<br/>
Espressione XPath valida che consente di selezionare il set di nodi necessario contenuto nel file.

*name*<br/>
Identificatore del nome contenuto nel tag che precede i commenti. `name` ha sempre un `id`.

*ID*<br/>
ID del tag che precede i commenti.  Racchiudere il nome tra virgolette singole o doppie.

## <a name="remarks"></a>Note

Il tag \<include> usa la sintassi XML XPath. Per informazioni sulla personalizzazione dell'uso di \<include>, vedere la documentazione relativa a XPath.

Compilare con [/doc](doc-process-documentation-comments-c-cpp.md) per elaborare i commenti relativi alla documentazione in un file.

## <a name="example"></a>Esempio

In questo esempio vengono presi in considerazione più file. Il primo file, che usa \<include>, contiene i commenti alla documentazione seguenti:

```cpp
// xml_include_tag.cpp
// compile with: /clr /doc /LD
// post-build command: xdcmake xml_include_tag.dll

/// <include file='xml_include_tag.doc' path='MyDocs/MyMembers[@name="test"]/*' />
public ref class Test {
   void TestMethod() {
   }
};

/// <include file='xml_include_tag.doc' path='MyDocs/MyMembers[@name="test2"]/*' />
public ref class Test2 {
   void Test() {
   }
};
```

Il secondo file, xml_include_tag.doc, contiene i commenti alla documentazione seguenti:

```xml
<MyDocs>

<MyMembers name="test">
<summary>
The summary for this type.
</summary>
</MyMembers>

<MyMembers name="test2">
<summary>
The summary for this other type.
</summary>
</MyMembers>

</MyDocs>
```

## <a name="program-output"></a>Output di programma

```xml
<?xml version="1.0"?>
<doc>
    <assembly>
        <name>t2</name>
    </assembly>
    <members>
        <member name="T:Test">
            <summary>
The summary for this type.
</summary>
        </member>
        <member name="T:Test2">
            <summary>
The summary for this other type.
</summary>
        </member>
    </members>
</doc>
```

## <a name="see-also"></a>Vedere anche

[Documentazione di XML](xml-documentation-visual-cpp.md)
