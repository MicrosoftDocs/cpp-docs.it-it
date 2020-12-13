---
description: 'Altre informazioni su: macro della classe di finestra'
title: Macro della classe di finestra
ms.date: 11/04/2016
f1_keywords:
- atlwin/ATL::DECLARE_WND_CLASS
- atlwin/ATL::DECLARE_WND_SUPERCLASS
- atlwin/ATL::DECLARE_WND_CLASS_EX
ms.assetid: ce18681a-2bab-4453-9895-0f3ea47c2b24
ms.openlocfilehash: eb1abcdfea2f3f7e3a8859473d3fabe734906afe
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97138685"
---
# <a name="window-class-macros"></a>Macro della classe di finestra

Queste macro definiscono le utilità della classe di finestra.

|Nome|Description|
|-|-|
|[DECLARE_WND_CLASS](#declare_wnd_class)|Consente di specificare il nome di una nuova classe di finestra.|
|[DECLARE_WND_CLASS2](#declare_wnd_class2)|(Visual Studio 2017) Consente di specificare il nome di una nuova classe di finestra e la classe contenitore la cui routine della finestra utilizzerà la nuova classe.|
|[DECLARE_WND_SUPERCLASS](#declare_wnd_superclass)|Consente di specificare il nome di una classe di finestra esistente sulla quale sarà basata una nuova classe di finestra.|
|[DECLARE_WND_CLASS_EX](#declare_wnd_class_ex)|Consente di specificare i parametri di una classe.|

## <a name="requirements"></a>Requisiti

**Intestazione:** atlwin. h

## <a name="declare_wnd_class"></a><a name="declare_wnd_class"></a> DECLARE_WND_CLASS

Consente di specificare il nome di una nuova classe di finestra. Inserire questa macro nella classe del controllo di un controllo ActiveX ATL.

```
DECLARE_WND_CLASS( WndClassName )
```

### <a name="parameters"></a>Parametri

*WndClassName*<br/>
in Nome della nuova classe di finestra. Se NULL, ATL genererà un nome di classe di finestra.

### <a name="remarks"></a>Commenti

Se si usa l'opzione del compilatore/permissive-, DECLARE_WND_CLASS provocherà un errore del compilatore. in alternativa, usare DECLARE_WND_CLASS2.

DECLARE_WND_CLASS consente di specificare il nome di una nuova classe di finestra le cui informazioni verranno gestite da [CWndClassInfo](cwndclassinfo-class.md). DECLARE_WND_CLASS definisce la nuova classe della finestra implementando la funzione statica seguente:

[!code-cpp[NVC_ATL_Windowing#127](../../atl/codesnippet/cpp/window-class-macros_1.cpp)]

DECLARE_WND_CLASS specifica gli stili seguenti per la nuova finestra:

- CS_HREDRAW

- CS_VREDRAW

- CS_DBLCLKS

DECLARE_WND_CLASS specifica anche il colore di sfondo della finestra predefinita. Utilizzare la macro [DECLARE_WND_CLASS_EX](#declare_wnd_class_ex) per fornire stili e colori di sfondo personalizzati.

[CWindowImpl](cwindowimpl-class.md) usa la macro DECLARE_WND_CLASS per creare una finestra basata su una nuova classe di finestra. Per eseguire l'override di questo comportamento, usare la macro [DECLARE_WND_SUPERCLASS](#declare_wnd_superclass) o fornire un'implementazione personalizzata della funzione [GetWndClassInfo](cwindowimpl-class.md#getwndclassinfo) .

Per ulteriori informazioni sull'utilizzo di Windows in ATL, vedere l'articolo relativo alle [classi di finestra ATL](../../atl/atl-window-classes.md).

## <a name="declare_wnd_class2"></a><a name="declare_wnd_class2"></a> DECLARE_WND_CLASS2

(Visual Studio 2017) Simile a DECLARE_WND_CLASS, ma con un parametro aggiuntivo che evita un errore di nome dipendente durante la compilazione con l'opzione/permissive-.

```
DECLARE_WND_CLASS2( WndClassName, EnclosingClass )
```

### <a name="parameters"></a>Parametri

*WndClassName*<br/>
in Nome della nuova classe di finestra. Se NULL, ATL genererà un nome di classe di finestra.

*EnclosingClass*<br/>
in Nome della classe della finestra che racchiude la nuova classe di finestra. Non può essere NULL.

### <a name="remarks"></a>Commenti

Se si usa l'opzione/permissive-, DECLARE_WND_CLASS provocherà un errore di compilazione perché contiene un nome dipendente. DECLARE_WND_CLASS2 è necessario denominare in modo esplicito la classe in cui viene usata questa macro e non provoca l'errore nel flag/permissive-.
In caso contrario, questa macro è identica a [DECLARE_WND_CLASS](#declare_wnd_class).

## <a name="declare_wnd_superclass"></a><a name="declare_wnd_superclass"></a> DECLARE_WND_SUPERCLASS

Consente di specificare i parametri di una classe. Inserire questa macro nella classe del controllo di un controllo ActiveX ATL.

```
DECLARE_WND_SUPERCLASS( WndClassName, OrigWndClassName )
```

### <a name="parameters"></a>Parametri

*WndClassName*<br/>
in Nome della classe della finestra che superclasserà *OrigWndClassName*. Se NULL, ATL genererà un nome di classe di finestra.

*OrigWndClassName*<br/>
in Nome di una classe di finestra esistente.

### <a name="remarks"></a>Commenti

Questa macro consente di specificare il nome di una classe di finestra che superclasserà una classe di finestra esistente. [CWndClassInfo](cwndclassinfo-class.md) gestisce le informazioni della superclasse.

DECLARE_WND_SUPERCLASS implementa la funzione statica seguente:

[!code-cpp[NVC_ATL_Windowing#127](../../atl/codesnippet/cpp/window-class-macros_1.cpp)]

Per impostazione predefinita, [CWindowImpl](cwindowimpl-class.md) usa la macro [DECLARE_WND_CLASS](#declare_wnd_class) per creare una finestra basata su una nuova classe di finestra. Specificando la macro DECLARE_WND_SUPERCLASS in una `CWindowImpl` classe derivata da, la classe della finestra sarà basata su una classe esistente ma utilizzerà la routine della finestra. Questa tecnica è detta superclasse.

Oltre a usare le macro DECLARE_WND_CLASS e DECLARE_WND_SUPERCLASS, è possibile eseguire l'override della funzione [GetWndClassInfo](cwindowimpl-class.md#getwndclassinfo) con la propria implementazione.

Per ulteriori informazioni sull'utilizzo di Windows in ATL, vedere l'articolo relativo alle [classi di finestra ATL](../../atl/atl-window-classes.md).

## <a name="declare_wnd_class_ex"></a><a name="declare_wnd_class_ex"></a> DECLARE_WND_CLASS_EX

Consente di specificare il nome di una classe di finestra esistente sulla quale sarà basata una nuova classe di finestra. Inserire questa macro nella classe del controllo di un controllo ActiveX ATL.

```
DECLARE_WND_CLASS_EX( WndClassName, style, bkgnd )
```

### <a name="parameters"></a>Parametri

*WndClassName*<br/>
in Nome della nuova classe di finestra. Se NULL, ATL genererà un nome di classe di finestra.

*style*<br/>
in Stile della finestra.

*BKGND*<br/>
in Colore di sfondo della finestra.

### <a name="remarks"></a>Commenti

Questa macro consente di specificare i parametri della classe di una nuova classe di finestra, le cui informazioni verranno gestite da [CWndClassInfo](cwndclassinfo-class.md). DECLARE_WND_CLASS_EX definisce la nuova classe della finestra implementando la funzione statica seguente:

[!code-cpp[NVC_ATL_Windowing#127](../../atl/codesnippet/cpp/window-class-macros_1.cpp)]

Se si desidera utilizzare gli stili predefiniti e il colore di sfondo, utilizzare la macro [DECLARE_WND_CLASS](#declare_wnd_class) . Per ulteriori informazioni sull'utilizzo di Windows in ATL, vedere l'articolo relativo alle [classi di finestra ATL](../../atl/atl-window-classes.md).

## <a name="see-also"></a>Vedi anche

[Macro](atl-macros.md)
