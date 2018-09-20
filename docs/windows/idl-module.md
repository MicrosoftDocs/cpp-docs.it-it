---
title: idl_module | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- vc-attr.idl_module
dev_langs:
- C++
helpviewer_keywords:
- idl_module attribute
ms.assetid: 3578b337-e38a-4334-b747-15404c02dbc0
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 0539275a09a64e31a9ecad17cab899368701e353
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46412213"
---
# <a name="idlmodule"></a>idl_module

Specifica un punto di ingresso in un file con estensione dll.

## <a name="syntax"></a>Sintassi

```cpp
[ idl_module (
   name=module_name,
   dllname=dll,
   uuid="uuid",
   helpstring="help text",
   helpstringcontext=helpcontextID,
   helpcontext=helpcontext,
   hidden,
   restricted
) ]
function declaration
```

### <a name="parameters"></a>Parametri

*name*<br/>
Un nome definito dall'utente per il blocco di codice che verrà visualizzato nel file IDL.

*dllname*<br/>
(Facoltativo) Il file con estensione dll che contiene l'esportazione.

*uuid*<br/>
(Facoltativo) Un ID univoco.

*helpstring*<br/>
(Facoltativo) Una stringa di caratteri utilizzata per descrivere la libreria dei tipi.

*helpstringcontext*<br/>
(Facoltativo) L'ID di un argomento della Guida in un file con estensione chm o. hlp.

*helpcontext*<br/>
(Facoltativo) L'ID della Guida per questa libreria dei tipi.

*hidden*<br/>
(Facoltativo) Un parametro che impedisce la visualizzazione libreria. Vedere le [nascosto](/windows/desktop/Midl/hidden) attributo MIDL per altre informazioni.

*restricted*<br/>
(Facoltativo) I membri della raccolta non possono essere chiamati in modo arbitrario. Vedere le [limitato](/windows/desktop/Midl/restricted) attributo MIDL per altre informazioni.

*dichiarazione di funzione*<br/>
La funzione che verrà definita.

## <a name="remarks"></a>Note

Il **idl_module** attributo C++ consente di specificare il punto di ingresso in un file con estensione dll, che consente di importare da un file con estensione dll.

Il **idl_module** attributo ha funzionalità simili a quelle di [modulo](/windows/desktop/Midl/module) attributo MIDL.

È possibile esportare alcuna operazione da un oggetto COM che è possibile esportare da un file con estensione dll inserendo un punto di ingresso DLL nel blocco di libreria di un file con estensione idl.

Le utilizzino **idl_module** in due passaggi. In primo luogo, è necessario definire una coppia nome/DLL. Quindi, quando si usa **idl_module** per specificare un punto di ingresso, specificare il nome e gli attributi aggiuntivi.

## <a name="example"></a>Esempio

Il codice seguente viene illustrato come utilizzare il **idl_module** attributo:

```cpp
// cpp_attr_ref_idl_module.cpp
// compile with: /LD
[idl_quote("midl_pragma warning(disable:2461)")];
[module(name="MyLibrary"), idl_module(name="MyLib", dllname="xxx.dll")];
[idl_module(name="MyLib"), entry(4), usesgetlasterror]
void FuncName(int i);
```

## <a name="requirements"></a>Requisiti

### <a name="attribute-context"></a>Contesto attributo

|||
|-|-|
|**Si applica a**|Ovunque|
|**Ripetibile**|No|
|**Attributi obbligatori**|Nessuna|
|**Attributi non validi**|nessuno|

Per altre informazioni, vedere [Contesti di attributi](../windows/attribute-contexts.md).

## <a name="see-also"></a>Vedere anche

[Attributi IDL](../windows/idl-attributes.md)<br/>
[Attributi autonomi](../windows/stand-alone-attributes.md)<br/>
[entry](../windows/entry.md)  