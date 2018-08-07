---
title: modulo (C++) | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- vc-attr.module
dev_langs:
- C++
helpviewer_keywords:
- module attributes
ms.assetid: 02223b2a-62b5-4262-832f-564b1e11e58e
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 3dc93b6dc6d6a5fbf6bcd8899793e07bd6446de1
ms.sourcegitcommit: 4586bfc32d8bc37ab08b24816d7fad5df709bfa3
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/07/2018
ms.locfileid: "39604356"
---
# <a name="module-c"></a>modulo (C++)
Definisce il blocco di libreria nel file IDL.  
  
## <a name="syntax"></a>Sintassi  
  
```  
[ module (  
   type=dll,  
   name=string,  
   version=1.0,  
   uuid=uuid,  
   lcid=integer,  
   control=boolean,  
   helpstring=string,  
   helpstringdll=string,  
   helpfile=string,  
   helpcontext=integer,  
   helpstringcontext=integer,  
   hidden=boolean,  
   restricted=boolean,  
   custom=string,  
   resource_name=string,  
) ];  
```  
  
### <a name="parameters"></a>Parametri  
 *tipo* (facoltativo)  
 Può essere uno dei seguenti:  
  
-   `dll` Aggiunge funzioni e classi che consentono alla DLL risultante di funzionare come un server COM in-process. Rappresenta il valore predefinito.  
  
-   `exe` Aggiunge funzioni e classi che consentono a risultante eseguibile per funzionare come un out COM del server di elaborazione.  
  
-   `service` Aggiunge funzioni e classi che consentono a risultante eseguibile per funzionare come un servizio NT.  
  
-   `unspecified` Disabilita l'inserimento di codice ATL correlato all'attributo di modulo: le funzioni di punto di inserimento della classe di modulo ATL, istanza globale atlmodule e voce. Non disabilita l'inserimento di codice ATL a causa di altri attributi del progetto.  
  
 *name* (facoltativo)  
 Il nome del blocco di libreria.  
  
 *versione* (facoltativo)  
 Il numero di versione da assegnare al blocco di libreria. Il valore predefinito è 1,0.  
  
 *uuid*  
 L'ID univoco per la libreria. Se si omette questo parametro, viene generato automaticamente un ID per la libreria. Potrebbe essere necessario recuperare il *uuid* del blocco di libreria, è possibile ripetere l'operazione usando l'identificatore **uuidof (***NomeLibreria***)**.  
  
 *lcid*  
 Il parametro di localizzazione. Per altre informazioni, vedere [lcid](http://msdn.microsoft.com/library/windows/desktop/aa367067) .  
  
 *controllo* (facoltativo)  
 Specifica che tutte le coclassi nella libreria sono controlli.  
  
 *helpstring*  
 Specifica la libreria dei tipi.  
  
 *helpstringdll* (facoltativo)  
 Imposta il nome del file DLL da usare per eseguire una ricerca di stringhe di documento. Per altre informazioni, vedere [helpstringdll](http://msdn.microsoft.com/library/windows/desktop/aa366860) .  
  
 *HelpFile* (facoltativo)  
 Il nome del file della Guida per la libreria dei tipi.  
  
 *HelpContext* (facoltativo)  
 L'ID Guida per questa libreria dei tipi.  
  
 *helpstringcontext* (facoltativo)  
 Per altre informazioni, vedere [helpstringcontext](../windows/helpstringcontext.md) .  
  
 *nascosto* (facoltativo)  
 Impedisce la visualizzazione dell'intera libreria. Questo utilizzo è pensato per i controlli. Gli host devono creare una nuova libreria dei tipi che esegue il wrapping del controllo con le proprietà estese. Per altre informazioni, vedere l'attributo MIDL [hidden](http://msdn.microsoft.com/library/windows/desktop/aa366861) .  
  
 *con restrizioni* (facoltativo)  
 I membri della libreria non possono essere chiamati in modo arbitrario. Per altre informazioni, vedere l'attributo MIDL [restricted](http://msdn.microsoft.com/library/windows/desktop/aa367157) .  
  
 *personalizzato* (facoltativo)  
 Uno o più attributi; è simile all'attributo [custom](../windows/custom-cpp.md) . Il primo parametro per *personalizzato* è il GUID dell'attributo. Ad esempio:  
  
```  
[module(custom={guid,1}, custom={guid1,2})]  
```  
  
 *resource_name*  
 L'ID di risorsa stringa del file RGS utilizzato per registrare l'ID di APP della DLL, dell'eseguibile o del servizio. Quando il modulo è di tipo servizio, questo argomento viene usato anche per ottenere l'ID della stringa contenente il nome del servizio.  
  
> [!NOTE]
>  Sia il file RGS che la stringa contenente il nome del servizio devono contenere lo stesso valore numerico.  
  
## <a name="remarks"></a>Note  
 Se non si specifica la *limitato* parametro per [emitidl](../windows/emitidl.md), **modulo** è obbligatorio in qualsiasi programma che usa gli attributi di C++.  
  
 Verrà creato un blocco di libreria se, oltre all'attributo **module** , il codice sorgente usa anche [dispinterface](../windows/dispinterface.md), [dual](../windows/dual.md), [object](../windows/object-cpp.md)o un attributo che implica [coclass](../windows/coclass.md).  
  
 In un file IDL è consentito un solo blocco di libreria. Più voci di modulo nel codice sorgente vengono unite e vengono implementati i valori dei parametri più recenti.  
  
 Se questo attributo viene usato in un progetto che usa ATL, il comportamento dell'attributo cambia. Oltre al comportamento precedente, l'attributo inserisce anche un oggetto globale (chiamato `_AtlModule`) del tipo corretto e codice di supporto aggiuntivo. Se l'attributo è autonomo, inserisce una classe derivata dal tipo di modulo corretto. Se l'attributo è applicato a una classe, aggiunge una classe base del tipo di modulo corretto. Il tipo corretto è determinato dal valore della *tipo* parametro:  
  
-   `type` = **dll**  
  
     [CAtlDllModuleT](../atl/reference/catldllmodulet-class.md) si usa come classe base e punti di ingresso standard della DLL richiesti per un server COM. Questi punti di ingresso sono [DllMain](http://msdn.microsoft.com/library/windows/desktop/ms682583), [DllRegisterServer](http://msdn.microsoft.com/library/windows/desktop/ms682162), [DllUnRegisterServer](http://msdn.microsoft.com/library/windows/desktop/ms691457), [DllCanUnloadNow](http://msdn.microsoft.com/library/windows/desktop/ms690368)e [DllGetClassObject](http://msdn.microsoft.com/library/windows/desktop/dd797891).  
  
-   `type` = **exe**  
  
     [CAtlExeModuleT](../atl/reference/catlexemodulet-class.md) si usa come classe base e punto di ingresso standard dell'eseguibile [WinMain](http://msdn.microsoft.com/library/windows/desktop/ms633559).  
  
-   `type` = **service**  
  
     [CAtlServiceModuleT](../atl/reference/catlservicemodulet-class.md) si usa come classe base e punto di ingresso standard dell'eseguibile [WinMain](http://msdn.microsoft.com/library/windows/desktop/ms633559).  
  
-   `type` = **unspecified**  
  
     Disabilita l'inserimento del codice ATL correlato all'attributo di modulo.  
  
## <a name="example"></a>Esempio  
 Il codice seguente illustra come creare un blocco di libreria nel file IDL generato.  
  
```cpp  
// cpp_attr_ref_module1.cpp  
// compile with: /LD  
[module(name="MyLibrary", version="1.2", helpfile="MyHelpFile")];  
```  
  
 Il codice seguente mostra che è possibile fornire la propria implementazione di una funzione che verrà visualizzata nel codice inserito in seguito all'utilizzo di **module**. Per altre informazioni sulla visualizzazione del codice inserito, vedere [/Fx](../build/reference/fx-merge-injected-code.md) . Per eseguire l'override di una delle funzioni inserite dall'attributo **modulo** , creare una classe che conterrà l'implementazione della funzione e fare in modo che l'attributo **module** sia applicato a tale classe.  
  
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
|**Attributi obbligatori**|Nessuna|  
|**Attributi non validi**|nessuno|  
  
 Per altre informazioni, vedere [Contesti di attributi](../windows/attribute-contexts.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Attributi IDL](../windows/idl-attributes.md)   
 [Attributi della classe](../windows/class-attributes.md)   
 [Attributi autonomi](../windows/stand-alone-attributes.md)   
 [TypeDef, Enum, Union e struct (attributi)](../windows/typedef-enum-union-and-struct-attributes.md)   
 [usesgetlasterror](../windows/usesgetlasterror.md)   
 [Libreria](http://msdn.microsoft.com/library/windows/desktop/aa367069)   
 [HelpContext](../windows/helpcontext.md)   
 [HelpString](../windows/helpstring.md)   
 [HelpFile](../windows/helpfile.md)   
 [version](../windows/version-cpp.md)   