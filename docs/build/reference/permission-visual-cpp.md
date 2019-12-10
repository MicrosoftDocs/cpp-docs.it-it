---
title: '> di autorizzazione &lt;C++ (commenti sulla documentazione)'
ms.date: 11/04/2016
f1_keywords:
- permission
- <permission>
helpviewer_keywords:
- <permission> C++ XML tag
- permission C++ XML tag
ms.assetid: 537ee2bc-95bd-48e4-9ce6-3420c3da87f4
ms.openlocfilehash: e7f0a59c85e3fa28d24e44953e207151c3afa0f4
ms.sourcegitcommit: 573b36b52b0de7be5cae309d45b68ac7ecf9a6d8
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/10/2019
ms.locfileid: "74988673"
---
# <a name="ltpermissiongt"></a>&lt;permission&gt;

Il tag \<permission> consente di documentare l'accesso a un membro. <xref:System.Security.PermissionSet> consente di specificare l'accesso a un membro.

## <a name="syntax"></a>Sintassi

```
<permission cref="member">description</permission>
```

#### <a name="parameters"></a>Parametri

*membro*<br/>
Riferimento a un membro o a un campo disponibile per essere chiamato dall'ambiente di compilazione corrente. Il compilatore verifica l'esistenza dell'elemento di codice specificato e converte `member` nel nome canonico dell'elemento nel file XML di output.  Racchiudere il nome tra virgolette singole o doppie.

Il compilatore genera un avviso se non trova `member`.

Per informazioni su come creare un riferimento cref a un tipo generico, vedere [\<see>](see-visual-cpp.md).

*description*<br/>
Descrizione dell'accesso al membro.

## <a name="remarks"></a>Note

Compilare con [/doc](doc-process-documentation-comments-c-cpp.md) per elaborare i commenti relativi alla documentazione in un file.

Il compilatore MSVC tenterà di risolvere i riferimenti CREF in un passaggio attraverso i commenti della documentazione.  Pertanto, se si utilizzano le regole di ricerca di C++, un simbolo non viene trovato dal compilatore e il riferimento verrà contrassegnato come non risolto. Per altre informazioni, vedere [\<seealso>](seealso-visual-cpp.md).

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

[Documentazione di XML](xml-documentation-visual-cpp.md)
