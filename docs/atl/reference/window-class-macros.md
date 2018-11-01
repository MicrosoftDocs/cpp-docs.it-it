---
title: Macro di classi di finestra
ms.date: 11/04/2016
f1_keywords:
- atlwin/ATL::DECLARE_WND_CLASS
- atlwin/ATL::DECLARE_WND_SUPERCLASS
- atlwin/ATL::DECLARE_WND_CLASS_EX
ms.assetid: ce18681a-2bab-4453-9895-0f3ea47c2b24
ms.openlocfilehash: 75a6a769770c9de8b26c08fae852197cdb99248e
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50503155"
---
# <a name="window-class-macros"></a>Macro di classi di finestra

Queste macro definiscono le utilità di classe di finestra.

|||
|-|-|
|[DECLARE_WND_CLASS](#declare_wnd_class)|Consente di specificare il nome di una nuova classe di finestra.|
|[DECLARE_WND_CLASS2](#declare_wnd_class2)|(Visual Studio 2017) Consente di specificare il nome di una nuova classe della finestra e la classe contenitore cui routine userà la nuova classe.|
|[DECLARE_WND_SUPERCLASS](#declare_wnd_superclass)|Consente di specificare il nome di una classe finestra esistente su cui basare una nuova classe della finestra.|
|[DECLARE_WND_CLASS_EX](#declare_wnd_class_ex)|Consente di specificare i parametri di una classe.|

## <a name="requirements"></a>Requisiti

**Intestazione:** atlwin. h

##  <a name="declare_wnd_class"></a>  DECLARE_WND_CLASS

Consente di specificare il nome di una nuova classe di finestra. Inserire questa macro nella classe del controllo di un controllo ActiveX ATL.

```
DECLARE_WND_CLASS( WndClassName )
```

### <a name="parameters"></a>Parametri

*WndClassName*<br/>
[in] Il nome della nuova classe di finestra. Se NULL, ATL genererà un nome di classe di finestra.

### <a name="remarks"></a>Note

Se si usa l'opzione /permissive-compiler, quindi DECLARE_WND_CLASS causerà un errore del compilatore; In alternativa, usare DECLARE_WND_CLASS2.

DECLARE_WND_CLASS consente di specificare il nome di una nuova classe di finestra cui informazioni dovranno essere gestiti dai [CWndClassInfo](cwndclassinfo-class.md). DECLARE_WND_CLASS definisce la nuova classe della finestra implementando la funzione statica seguente:

[!code-cpp[NVC_ATL_Windowing#127](../../atl/codesnippet/cpp/window-class-macros_1.cpp)]

DECLARE_WND_CLASS specifica gli stili seguenti per la nuova finestra:

- CS_HREDRAW

- CS_VREDRAW

- CS_DBLCLKS

DECLARE_WND_CLASS specifica anche il colore di sfondo della finestra predefinita. Usare la [DECLARE_WND_CLASS_EX](#declare_wnd_class_ex) macro per fornire gli stili personalizzati e il colore di sfondo.

[CWindowImpl](cwindowimpl-class.md) Usa la macro DECLARE_WND_CLASS per creare una finestra basata su una nuova classe della finestra. Per modificare questo comportamento, usare il [DECLARE_WND_SUPERCLASS](#declare_wnd_superclass) (macro), oppure fornire un'implementazione personalizzata del [GetWndClassInfo](cwindowimpl-class.md#getwndclassinfo) (funzione).

Per altre informazioni sull'uso delle finestre in ATL, vedere l'articolo [classi di finestra ATL](../../atl/atl-window-classes.md).

##  <a name="declare_wnd_class2"></a>  DECLARE_WND_CLASS2

(Visual Studio 2017) Simile a DECLARE_WND_CLASS, ma con un parametro aggiuntivo che consente di evitare un errore di nome dipendente durante la compilazione con il /permissive-option.

```
DECLARE_WND_CLASS2( WndClassName, EnclosingClass )
```

### <a name="parameters"></a>Parametri

*WndClassName*<br/>
[in] Il nome della nuova classe di finestra. Se NULL, ATL genererà un nome di classe di finestra.

*EnclosingClass*<br/>
[in] Il nome della classe della finestra che racchiude la nuova classe della finestra. Non può essere NULL.

### <a name="remarks"></a>Note

Se si usa il /permissive-option, DECLARE_WND_CLASS causerà un errore di compilazione perché contiene un nome di dipendente. DECLARE_WND_CLASS2 è necessario assegnare esplicitamente un nome della classe che questa macro viene usata e non causa l'errore sotto il /permissive-flag.
In caso contrario, questa macro equivale a [DECLARE_WND_CLASS](#declare_wnd_class).

##  <a name="declare_wnd_superclass"></a>  DECLARE_WND_SUPERCLASS

Consente di specificare i parametri di una classe. Inserire questa macro nella classe del controllo di un controllo ActiveX ATL.

```
DECLARE_WND_SUPERCLASS( WndClassName, OrigWndClassName )
```

### <a name="parameters"></a>Parametri

*WndClassName*<br/>
[in] Il nome della finestra di classe tale superclasse will *OrigWndClassName*. Se NULL, ATL genererà un nome di classe di finestra.

*OrigWndClassName*<br/>
[in] Il nome di una classe di finestra esistente.

### <a name="remarks"></a>Note

Questa macro consente di specificare il nome di una classe della finestra che verrà superclasse una classe di finestra esistente. [CWndClassInfo](cwndclassinfo-class.md) gestisce le informazioni della superclasse.

DECLARE_WND_SUPERCLASS implementa la funzione statica seguente:

[!code-cpp[NVC_ATL_Windowing#127](../../atl/codesnippet/cpp/window-class-macros_1.cpp)]

Per impostazione predefinita [CWindowImpl](cwindowimpl-class.md) Usa le [DECLARE_WND_CLASS](#declare_wnd_class) macro per creare una finestra basata su una nuova classe della finestra. Specificando la macro DECLARE_WND_SUPERCLASS in un `CWindowImpl`-classe, derivata la classe della finestra si baseranno su una classe esistente, ma userà la procedura della finestra. Questa tecnica è denominata creazione di superclassi.

Oltre a utilizzare le macro DECLARE_WND_CLASS e DECLARE_WND_SUPERCLASS, è possibile eseguire l'override di [GetWndClassInfo](cwindowimpl-class.md#getwndclassinfo) funzione con la propria implementazione.

Per altre informazioni sull'uso delle finestre in ATL, vedere l'articolo [classi di finestra ATL](../../atl/atl-window-classes.md).

##  <a name="declare_wnd_class_ex"></a>  DECLARE_WND_CLASS_EX

Consente di specificare il nome di una classe finestra esistente su cui basare una nuova classe della finestra. Inserire questa macro nella classe del controllo di un controllo ActiveX ATL.

```
DECLARE_WND_CLASS_EX( WndClassName, style, bkgnd )
```

### <a name="parameters"></a>Parametri

*WndClassName*<br/>
[in] Il nome della nuova classe di finestra. Se NULL, ATL genererà un nome di classe di finestra.

*Stile di visualizzazione*<br/>
[in] Lo stile della finestra.

*riempimento*<br/>
[in] Il colore di sfondo della finestra.

### <a name="remarks"></a>Note

Questa macro consente di specificare i parametri di classe di una nuova classe di finestra, le cui informazioni dovranno essere gestite dai [CWndClassInfo](cwndclassinfo-class.md). DECLARE_WND_CLASS_EX definisce la nuova classe della finestra implementando la funzione statica seguente:

[!code-cpp[NVC_ATL_Windowing#127](../../atl/codesnippet/cpp/window-class-macros_1.cpp)]

Se si desidera usare un colore di sfondo e gli stili predefiniti, usare il [DECLARE_WND_CLASS](#declare_wnd_class) macro. Per altre informazioni sull'uso delle finestre in ATL, vedere l'articolo [classi di finestra ATL](../../atl/atl-window-classes.md).

## <a name="see-also"></a>Vedere anche

[Macro](atl-macros.md)

