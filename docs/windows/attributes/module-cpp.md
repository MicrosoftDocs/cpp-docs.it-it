---
title: modulo (Attributo COM C
ms.date: 10/02/2018
f1_keywords:
- vc-attr.module
helpviewer_keywords:
- module attributes
ms.assetid: 02223b2a-62b5-4262-832f-564b1e11e58e
ms.openlocfilehash: 9d4f9e23aaf182e28930ba3a4462b07533ba9015
ms.sourcegitcommit: 7a6116e48c3c11b97371b8ae4ecc23adce1f092d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/22/2020
ms.locfileid: "81754374"
---
# <a name="module-c"></a>modulo (C++)

Definisce il blocco di libreria nel file IDL.

## <a name="syntax"></a>Sintassi

```cpp
[ module (type=dll, name=string, version=1.0, uuid=uuid, lcid=integer, control=boolean, helpstring=string, helpstringdll=string, helpfile=string, helpcontext=integer, helpstringcontext=integer, hidden=boolean, restricted=boolean, custom=string, resource_name=string,) ];
```

### <a name="parameters"></a>Parametri

*type*<br/>
(Facoltativo) Può essere uno dei seguenti:

- `dll`Aggiunge funzioni e classi che consentono alla DLL risultante di funzionare come server COM in-process. Si tratta del valore predefinito.

- `exe`Aggiunge funzioni e classi che consentono all'eseguibile risultante di funzionare come server COM out of process.

- `service`Aggiunge funzioni e classi che consentono all'eseguibile risultante di funzionare come servizio NT.

- `unspecified`Disabilita l'inserimento di codice ATL relativo all'attributo module: l'inserimento della classe ATL Module, le funzioni di _AtlModule di istanza globale e di punto di ingresso. Non disabilita l'inserimento di codice ATL a causa di altri attributi del progetto.

*nome*<br/>
(Facoltativo) Nome del blocco di libreria.

*version*<br/>
(Facoltativo) Il numero di versione che si desidera assegnare al blocco di libreria. Il valore predefinito è 1,0.

*uuid*<br/>
L'ID univoco per la libreria. Se si omette questo parametro, viene generato automaticamente un ID per la libreria. Potrebbe essere necessario recuperare il *uuid* del blocco di libreria ed è possibile farlo mediante l'identificatore **__uuidof(** *nomelibreria* **)**.

*lcid*<br/>
Il parametro di localizzazione. Per altre informazioni, vedere [lcid](/windows/win32/Midl/lcid) .

*Controllo*<br/>
(Facoltativo) Specifica che tutte le coclassi nella libreria sono controlli.

*helpstring*<br/>
Specifica la libreria dei tipi.

*helpstringdll*<br/>
(Facoltativo) Imposta il nome del file DLL da utilizzare per eseguire una ricerca di stringhe di documento. Per altre informazioni, vedere [helpstringdll](/windows/win32/Midl/helpstringdll) .

*Helpfile*<br/>
(Facoltativo) Nome del file **della Guida** per la libreria dei tipi.

*helpcontext*<br/>
(Facoltativo) **ID della Guida** per questa libreria dei tipi.

*helpstringcontext*<br/>
(Facoltativo) Per ulteriori informazioni, vedere [helpstringcontext.](helpstringcontext.md)

*Nascosto*<br/>
(Facoltativo) Impedisce la visualizzazione dell'intera libreria. Questo utilizzo è pensato per i controlli. Gli host devono creare una nuova libreria dei tipi che esegue il wrapping del controllo con le proprietà estese. Per altre informazioni, vedere l'attributo MIDL [hidden](/windows/win32/Midl/hidden) .

*Limitato*<br/>
(Facoltativo) I membri della libreria non possono essere chiamati arbitrariamente. Per altre informazioni, vedere l'attributo MIDL [restricted](/windows/win32/Midl/restricted) .

*Personalizzato*<br/>
(Facoltativo) Uno o più attributi; è simile all'attributo [personalizzato.](custom-cpp.md) Il primo parametro da *personalizzare* è il GUID dell'attributo. Ad esempio:

```
[module(custom={guid,1}, custom={guid1,2})]
```

*resource_name*<br/>
L'ID di risorsa stringa del file RGS utilizzato per registrare l'ID di APP della DLL, dell'eseguibile o del servizio. Quando il modulo è di tipo servizio, questo argomento viene usato anche per ottenere l'ID della stringa contenente il nome del servizio.

> [!NOTE]
> Sia il file RGS che la stringa contenente il nome del servizio devono contenere lo stesso valore numerico.

## <a name="remarks"></a>Osservazioni

Se non si imposta il parametro *restricted* su [emitidl](emitidl.md), **module** è obbligatorio in qualsiasi programma che usa gli attributi di C++.

Verrà creato un blocco di libreria se, oltre all'attributo **module** , il codice sorgente usa anche [dispinterface](dispinterface.md), [dual](dual.md), [object](object-cpp.md)o un attributo che implica [coclass](coclass.md).

In un file IDL è consentito un solo blocco di libreria. Più voci di modulo nel codice sorgente vengono unite e vengono implementati i valori dei parametri più recenti.

Se questo attributo viene usato in un progetto che usa ATL, il comportamento dell'attributo cambia. Oltre al comportamento precedente, l'attributo inserisce `_AtlModule`anche un oggetto globale (chiamato ) del tipo corretto e codice di supporto aggiuntivo. Se l'attributo è autonomo, inserisce una classe derivata dal tipo di modulo corretto. Se l'attributo è applicato a una classe, aggiunge una classe base del tipo di modulo corretto. Il tipo corretto è determinato dal valore del parametro *type:*

- `type` = **dll (in tis**

   [CAtlDllModuleT](../../atl/reference/catldllmodulet-class.md) si usa come classe base e punti di ingresso standard della DLL richiesti per un server COM. Questi punti di ingresso sono [DllMain](/windows/win32/Dlls/dllmain), [DllRegisterServer](/windows/win32/api/olectl/nf-olectl-dllregisterserver), [DllUnRegisterServer](/windows/win32/api/olectl/nf-olectl-dllunregisterserver), [DllCanUnloadNow](/windows/win32/api/combaseapi/nf-combaseapi-dllcanunloadnow)e [DllGetClassObject](/windows/win32/api/combaseapi/nf-combaseapi-dllgetclassobject).

- `type` = **exe**

   [CAtlExeModuleT](../../atl/reference/catlexemodulet-class.md) si usa come classe base e punto di ingresso standard dell'eseguibile [WinMain](/windows/win32/api/winbase/nf-winbase-winmain).

- `type` = **Servizio**

   [CAtlServiceModuleT](../../atl/reference/catlservicemodulet-class.md) si usa come classe base e punto di ingresso standard dell'eseguibile [WinMain](/windows/win32/api/winbase/nf-winbase-winmain).

- `type` = **Specificato**

   Disabilita l'inserimento del codice ATL correlato all'attributo di modulo.

## <a name="example"></a>Esempio

Il codice seguente illustra come creare un blocco di libreria nel file IDL generato.

```cpp
// cpp_attr_ref_module1.cpp
// compile with: /LD
[module(name="MyLibrary", version="1.2", helpfile="MyHelpFile")];
```

Il codice seguente mostra che è possibile fornire la propria implementazione di una funzione che verrà visualizzata nel codice inserito in seguito all'utilizzo di **module**. Per altre informazioni sulla visualizzazione del codice inserito, vedere [/Fx](../../build/reference/fx-merge-injected-code.md) . Per eseguire l'override di una delle funzioni inserite dall'attributo **modulo** , creare una classe che conterrà l'implementazione della funzione e fare in modo che l'attributo **module** sia applicato a tale classe.

```cpp
// cpp_attr_ref_module2.cpp
// compile with: /LD /link /OPT:NOREF
#include <atlbase.h>
#include <atlcom.h>
#include <atlwin.h>
#include <atltypes.h>
#include <atlctl.h>
#include <atlhost.h>
#include <atlplus.h>

// no semicolon after attribute block
[module(dll, name="MyLibrary", version="1.2", helpfile="MyHelpFile")]
// module attribute now applies to this class
class CMyClass {
public:
BOOL WINAPI DllMain(DWORD dwReason, LPVOID lpReserved) {
   // add your own code here
   return __super::DllMain(dwReason, lpReserved);
   }
};
```

## <a name="requirements"></a>Requisiti

### <a name="attribute-context"></a>Contesto attributo

|||
|-|-|
|**Si applica a**|Ovunque|
|**Ripetibile**|No|
|**Attributi obbligatori**|nessuno|
|**Attributi non validi**|nessuno|

Per altre informazioni, vedere [Contesti di attributi](cpp-attributes-com-net.md#contexts).

## <a name="see-also"></a>Vedere anche

[Attributi IDL](idl-attributes.md)<br/>
[Attributi di classe](class-attributes.md)<br/>
[Attributi autonomi](stand-alone-attributes.md)<br/>
[Attributi Typedef, Enum, Union e Struct](typedef-enum-union-and-struct-attributes.md)<br/>
[usesgetlasterror](usesgetlasterror.md)<br/>
[Libreria](/windows/win32/Midl/library)<br/>
[helpcontext](helpcontext.md)<br/>
[helpstring](helpstring.md)<br/>
[Helpfile](helpfile.md)<br/>
[version](version-cpp.md)
