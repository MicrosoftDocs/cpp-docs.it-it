---
description: 'Altre informazioni su: &lt; Includi&gt;'
title: '&lt;Includi> (commenti sulla documentazione C++)'
ms.date: 11/04/2016
f1_keywords:
- <include>
helpviewer_keywords:
- include C++ XML tag
- <include> C++ XML tag
ms.assetid: 392a3e61-0371-4617-8362-446650876ce3
ms.openlocfilehash: 577281b293fcca9b9b0b9491dd239240d435f32c
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97199779"
---
# <a name="ltincludegt"></a>&lt;include&gt;

Il \<include> tag consente di fare riferimento ai commenti in un altro file che descrive i tipi e i membri nel codice sorgente. eliminando la necessità di inserire i commenti relativi alla documentazione direttamente nel file del codice sorgente.  Ad esempio, è possibile usare \<include> per inserire commenti "standard" standard che vengono usati in tutto il team o la società.

## <a name="syntax"></a>Sintassi

```
<include file='filename' path='tagpath' />
```

#### <a name="parameters"></a>Parametri

*filename*<br/>
Nome del file che contiene la documentazione. È possibile qualificare il nome del file con un percorso.  Racchiudere il nome tra virgolette singole o doppie.  Il compilatore genera un avviso se non trova `filename`.

*tagpath*<br/>
Espressione XPath valida che consente di selezionare il set di nodi necessario contenuto nel file.

*nome*<br/>
Identificatore del nome contenuto nel tag che precede i commenti. `name` ha sempre un `id`.

*id*<br/>
ID del tag che precede i commenti.  Racchiudere il nome tra virgolette singole o doppie.

## <a name="remarks"></a>Commenti

Il \<include> tag utilizza la sintassi XPath XML. Per informazioni su come personalizzare l'utilizzo di, vedere la documentazione di XPath \<include> .

Compilare con [/doc](doc-process-documentation-comments-c-cpp.md) per elaborare i commenti relativi alla documentazione in un file.

## <a name="example"></a>Esempio

In questo esempio vengono presi in considerazione più file. Il primo file, che utilizza \<include> , contiene i seguenti commenti alla documentazione:

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

## <a name="see-also"></a>Vedi anche

[Documentazione XML](xml-documentation-visual-cpp.md)
