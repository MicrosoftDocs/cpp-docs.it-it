---
description: 'Altre informazioni su: &lt; autorizzazione&gt;'
title: '&lt;> di autorizzazione (commenti sulla documentazione C++)'
ms.date: 11/04/2016
f1_keywords:
- permission
- <permission>
helpviewer_keywords:
- <permission> C++ XML tag
- permission C++ XML tag
ms.assetid: 537ee2bc-95bd-48e4-9ce6-3420c3da87f4
ms.openlocfilehash: cd815b5df831632afd399e752e4525082f20b063
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97226025"
---
# <a name="ltpermissiongt"></a>&lt;permission&gt;

Il \<permission> tag consente di documentare l'accesso di un membro. <xref:System.Security.PermissionSet> consente di specificare l'accesso a un membro.

## <a name="syntax"></a>Sintassi

```
<permission cref="member">description</permission>
```

#### <a name="parameters"></a>Parametri

*membro*<br/>
Riferimento a un membro o a un campo disponibile per essere chiamato dall'ambiente di compilazione corrente. Il compilatore verifica l'esistenza dell'elemento di codice specificato e converte `member` nel nome canonico dell'elemento nel file XML di output.  Racchiudere il nome tra virgolette singole o doppie.

Il compilatore genera un avviso se non trova `member`.

Per informazioni su come creare un riferimento cref a un tipo generico, vedere [\<see>](see-visual-cpp.md) .

*description*<br/>
Descrizione dell'accesso al membro.

## <a name="remarks"></a>Commenti

Compilare con [/doc](doc-process-documentation-comments-c-cpp.md) per elaborare i commenti relativi alla documentazione in un file.

Il compilatore MSVC tenterà di risolvere i riferimenti CREF in un passaggio attraverso i commenti della documentazione.  Pertanto, se si utilizzano le regole di ricerca di C++, un simbolo non viene trovato dal compilatore e il riferimento verrà contrassegnato come non risolto. [\<seealso>](seealso-visual-cpp.md)Per ulteriori informazioni, vedere.

## <a name="example"></a>Esempio

```cpp
// xml_permission_tag.cpp
// compile with: /clr /doc /LD
// post-build command: xdcmake xml_permission_tag.dll
using namespace System;
/// Text for class TestClass.
public ref class TestClass {
   /// <permission cref="System::Security::PermissionSet">Everyone can access this method.</permission>
   void Test() {}
};
```

## <a name="see-also"></a>Vedere anche

[Documentazione XML](xml-documentation-visual-cpp.md)
