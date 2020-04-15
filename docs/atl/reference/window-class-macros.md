---
title: Macro di classe finestra
ms.date: 11/04/2016
f1_keywords:
- atlwin/ATL::DECLARE_WND_CLASS
- atlwin/ATL::DECLARE_WND_SUPERCLASS
- atlwin/ATL::DECLARE_WND_CLASS_EX
ms.assetid: ce18681a-2bab-4453-9895-0f3ea47c2b24
ms.openlocfilehash: 18c0912c506bc52421b18d36346204b557c0fc5c
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81325737"
---
# <a name="window-class-macros"></a>Macro di classe finestra

Queste macro definiscono le utilità delle classi di finestra.

|||
|-|-|
|[DECLARE_WND_CLASS](#declare_wnd_class)|Consente di specificare il nome di una nuova classe finestra.|
|[DECLARE_WND_CLASS2](#declare_wnd_class2)|(Visual Studio 2017) Consente di specificare il nome di una nuova classe finestra e la classe che lo contiene la cui routine finestra verrà utilizzata dalla nuova classe.|
|[DECLARE_WND_SUPERCLASS](#declare_wnd_superclass)|Consente di specificare il nome di una classe finestra esistente su cui si baserà una nuova classe finestra.|
|[DECLARE_WND_CLASS_EX](#declare_wnd_class_ex)|Consente di specificare i parametri di una classe.|

## <a name="requirements"></a>Requisiti

**Intestazione:** atlwin.h

## <a name="declare_wnd_class"></a><a name="declare_wnd_class"></a>DECLARE_WND_CLASS

Consente di specificare il nome di una nuova classe finestra. Inserire questa macro nella classe del controllo ActiveX ATL.

```
DECLARE_WND_CLASS( WndClassName )
```

### <a name="parameters"></a>Parametri

*WndClassName*<br/>
[in] Nome della nuova classe finestra. Se NULL, ATL genererà un nome di classe finestra.

### <a name="remarks"></a>Osservazioni

Se si utilizza l'opzione del compilatore /permissive, DECLARE_WND_CLASS causerà un errore del compilatore; utilizzare DECLARE_WND_CLASS2 invece.

DECLARE_WND_CLASS consente di specificare il nome di una nuova classe finestra le cui informazioni verranno gestite da [CWndClassInfo](cwndclassinfo-class.md). DECLARE_WND_CLASS definisce la nuova classe finestra implementando la seguente funzione statica:

[!code-cpp[NVC_ATL_Windowing#127](../../atl/codesnippet/cpp/window-class-macros_1.cpp)]

DECLARE_WND_CLASS specifica i seguenti stili per la nuova finestra:

- CS_HREDRAW

- CS_VREDRAW

- CS_DBLCLKS

DECLARE_WND_CLASS specifica anche il colore di sfondo della finestra predefinita. Utilizzare la macro [DECLARE_WND_CLASS_EX](#declare_wnd_class_ex) per fornire i propri stili e il colore di sfondo.

[CWindowImpl](cwindowimpl-class.md) utilizza la macro DECLARE_WND_CLASS per creare una finestra basata su una nuova classe finestra. Per eseguire l'override di questo comportamento, utilizzare la [DECLARE_WND_SUPERCLASS](#declare_wnd_superclass) macro o fornire la propria implementazione della funzione [GetWndClassInfo.](cwindowimpl-class.md#getwndclassinfo)

Per ulteriori informazioni sull'utilizzo delle finestre in ATL, vedere l'articolo Classi finestra [ATL](../../atl/atl-window-classes.md).

## <a name="declare_wnd_class2"></a><a name="declare_wnd_class2"></a>DECLARE_WND_CLASS2

(Visual Studio 2017) Simile a DECLARE_WND_CLASS, ma con un parametro aggiuntivo che evita un errore del nome dipendente durante la compilazione con l'opzione /permissive-.

```
DECLARE_WND_CLASS2( WndClassName, EnclosingClass )
```

### <a name="parameters"></a>Parametri

*WndClassName*<br/>
[in] Nome della nuova classe finestra. Se NULL, ATL genererà un nome di classe finestra.

*EnclosingClass (Classe di inclusione)*<br/>
[in] Nome della classe finestra che racchiude la nuova classe finestra. Non può essere NULL.

### <a name="remarks"></a>Osservazioni

Se si utilizza l'opzione /permissive-, DECLARE_WND_CLASS causerà un errore di compilazione perché contiene un nome dipendente. DECLARE_WND_CLASS2 richiede di denominare in modo esplicito la classe in cui viene utilizzata questa macro e non causa l'errore sotto il flag /permissive-.
In caso contrario, questa macro è identica a [DECLARE_WND_CLASS](#declare_wnd_class).

## <a name="declare_wnd_superclass"></a><a name="declare_wnd_superclass"></a>DECLARE_WND_SUPERCLASS

Consente di specificare i parametri di una classe. Inserire questa macro nella classe del controllo ActiveX ATL.

```
DECLARE_WND_SUPERCLASS( WndClassName, OrigWndClassName )
```

### <a name="parameters"></a>Parametri

*WndClassName*<br/>
[in] Nome della classe finestra che *superclasserà OrigWndClassName*. Se NULL, ATL genererà un nome di classe finestra.

*OrigWndClassName*<br/>
[in] Nome di una classe finestra esistente.

### <a name="remarks"></a>Osservazioni

Questa macro consente di specificare il nome di una classe finestra che superclasserà una classe finestra esistente. [CWndClassInfo](cwndclassinfo-class.md) gestisce le informazioni della superclasse.

DECLARE_WND_SUPERCLASS implementa la funzione statica seguente:To implements the following static function:

[!code-cpp[NVC_ATL_Windowing#127](../../atl/codesnippet/cpp/window-class-macros_1.cpp)]

Per impostazione predefinita, [CWindowImpl](cwindowimpl-class.md) utilizza la macro [DECLARE_WND_CLASS](#declare_wnd_class) per creare una finestra basata su una nuova classe finestra. Specificando la macro DECLARE_WND_SUPERCLASS `CWindowImpl`in una classe derivata da , la classe finestra sarà basata su una classe esistente, ma utilizzerà la routine della finestra. Questa tecnica è chiamata superclasse.

Oltre a utilizzare le macro DECLARE_WND_CLASS e DECLARE_WND_SUPERCLASS, è possibile eseguire l'override della funzione [GetWndClassInfo](cwindowimpl-class.md#getwndclassinfo) con la propria implementazione.

Per ulteriori informazioni sull'utilizzo delle finestre in ATL, vedere l'articolo Classi finestra [ATL](../../atl/atl-window-classes.md).

## <a name="declare_wnd_class_ex"></a><a name="declare_wnd_class_ex"></a>DECLARE_WND_CLASS_EX

Consente di specificare il nome di una classe finestra esistente su cui si baserà una nuova classe finestra. Inserire questa macro nella classe del controllo ActiveX ATL.

```
DECLARE_WND_CLASS_EX( WndClassName, style, bkgnd )
```

### <a name="parameters"></a>Parametri

*WndClassName*<br/>
[in] Nome della nuova classe finestra. Se NULL, ATL genererà un nome di classe finestra.

*Stile*<br/>
[in] Stile della finestra.

*bkgnd*<br/>
[in] Colore di sfondo della finestra.

### <a name="remarks"></a>Osservazioni

Questa macro consente di specificare i parametri di classe di una nuova classe finestra, le cui informazioni verranno gestite da [CWndClassInfo](cwndclassinfo-class.md). DECLARE_WND_CLASS_EX definisce la nuova classe finestra implementando la seguente funzione statica:

[!code-cpp[NVC_ATL_Windowing#127](../../atl/codesnippet/cpp/window-class-macros_1.cpp)]

Se si desidera utilizzare gli stili predefiniti e il colore di sfondo, utilizzare la macro [DECLARE_WND_CLASS.](#declare_wnd_class) Per ulteriori informazioni sull'utilizzo delle finestre in ATL, vedere l'articolo Classi finestra [ATL](../../atl/atl-window-classes.md).

## <a name="see-also"></a>Vedere anche

[Macro](atl-macros.md)
