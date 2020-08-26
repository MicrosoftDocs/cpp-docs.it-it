---
title: idl_quote (attributo COM C++)
ms.date: 10/02/2018
f1_keywords:
- vc-attr.idl_quote
helpviewer_keywords:
- idl_quote attribute
ms.assetid: a370e1b7-948b-4e67-9a25-58facf24e4c9
ms.openlocfilehash: 1d0aa80f64593ed347720b84e4059a0c32dce4be
ms.sourcegitcommit: ec6dd97ef3d10b44e0fedaa8e53f41696f49ac7b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/25/2020
ms.locfileid: "88844236"
---
# <a name="idl_quote"></a>idl_quote

Consente di utilizzare costrutti IDL non supportati nella versione corrente di Visual C++ e di passare al file con estensione IDL generato.

## <a name="syntax"></a>Sintassi

```cpp
[ idl_quote(text) ]
```

### <a name="parameters"></a>Parametri

*text*<br/>
Il nome dell'attributo che si desidera venga passato dal compilatore Microsoft C++ al file IDL generato senza restituire un errore del compilatore.

## <a name="remarks"></a>Osservazioni

Se l'attributo **idl_quote** C++ viene usato come attributo autonomo (con un punto e virgola dopo la parentesi quadra di chiusura), il *testo* viene inserito nel file IDL Unito così com'è. Se **idl_quote** viene utilizzato su un simbolo, il *testo* viene inserito nel blocco di attributi per tale simbolo.

## <a name="example"></a>Esempio

Il codice seguente illustra come è possibile specificare un attributo non supportato (usando **in**, che è supportato) e come definire e usare un costrutto IDL non definito:

```cpp
// cpp_attr_ref_idl_quote.cpp
// compile with: /LD
#include <unknwn.h>
[module(name="MyLibrary")];

[export]
struct MYFLOT {
   int i;
};

[export]
struct MYDUB {
   int i;
};

[idl_quote("typedef union _S1_TYPE switch (long l1) U1_TYPE { case 1024: \
struct MYFLOT f1; case 2048: struct MYDUB d2; } S1_TYPE;") ];

typedef struct _S1_TYPE {
   long l1;

union {
   MYFLOT f1; MYDUB d2; } U1_TYPE;
} S1_TYPE;

[uuid("2F5F63F1-16DA-11d2-9E7B-00C04FB926DA"), object]
__interface IStatic{
   HRESULT Func1([idl_quote("in")] int i);
   HRESULT func( S1_TYPE* myStruct );
};
```

Questo codice causa `MYFLOT` e `MYDUB` e la voce di *testo* da inserire nel file con estensione IDL generato. Il parametro *Name* impone il *testo* da inserire prima di qualsiasi elemento che fa riferimento al *nome* nel file IDL generato. Il parametro *dipendenze* impone di inserire le definizioni dell'elenco di dipendenze prima del *testo* nel file IDL generato.

## <a name="requirements"></a>Requisiti

| Contesto dell'attributo | Valore |
|-|-|
|**Si applica a**|Ovunque|
|**Ripetibile**|No|
|**Attributi richiesti**|Nessuno|
|**Attributi non validi**|Nessuno|

Per altre informazioni, vedere [Contesti di attributi](cpp-attributes-com-net.md#contexts).

## <a name="see-also"></a>Vedere anche

[Attributi IDL](idl-attributes.md)<br/>
[Attributi autonomi](stand-alone-attributes.md)
