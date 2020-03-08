---
title: Macro della mappa di delegati e interfacce (MFC)
ms.date: 03/30/2017
helpviewer_keywords:
- delegate map macros [MFC]
- event map macros [MFC]
- interface map macros [MFC]
ms.assetid: 3840e642-ff7d-4bdc-998b-c7d8fc50890e
ms.openlocfilehash: 8f48b916f7130551fc8d4da5bb2ebc75d8d728d5
ms.sourcegitcommit: 3e8fa01f323bc5043a48a0c18b855d38af3648d4
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/06/2020
ms.locfileid: "78856661"
---
# <a name="delegate-and-interface-map-macros"></a>Macro per le mappe di interfaccia e delegati

MFC supporta queste macro per le mappe di delegato e di interfaccia:

|||
|-|-|
|[BEGIN_DELEGATE_MAP](#begin_delegate_map)|Inizia una mappa di delegati.|
|[BEGIN_INTERFACE_MAP](#begin_interface_map)|Inizia la definizione della mappa interfaccita.|
|[Delegato CommandHandler](#commandhandler)|Registra i metodi di callback con un comando di origine.  |
|[END_DELEGATE_MAP](#end_delegate_map)|Termina una mappa di delegati.|
|[END_INTERFACE_MAP](#end_interface_map)|Termina la mappa dell'interfaccia nel file di implementazione. |
|[EVENT_DELEGATE_ENTRY](#event_delegate_entry)|Crea una voce nella mappa di delegati.|
|[INTERFACE_PART](#interface_part)|Utilizzato tra la macro BEGIN_INTERFACE_MAP e la macro END_INTERFACE_MAP per ogni interfaccia che l'oggetto supporterà.|
|[MAKE_DELEGATE](#make_delegate)|Connette un gestore eventi a un controllo gestito.|

## <a name="begin_delegate_map"></a>BEGIN_DELEGATE_MAP

Inizia una mappa di delegati.

### <a name="syntax"></a>Sintassi

```
BEGIN_DELEGATE_MAP(  CLASS );
```

### <a name="parameters"></a>Parametri

*CLASSE*<br/>
Classe in cui è ospitato il controllo gestito.

### <a name="remarks"></a>Osservazioni

Questa macro contrassegna l'inizio di un elenco di voci Delegate, che compongono una mappa di delegati. Per un esempio di utilizzo di questa macro, vedere [EVENT_DELEGATE_ENTRY](#event_delegate_entry).

### <a name="requirements"></a>Requisiti

**Intestazione:** msclr\event.h

##  <a name="begin_interface_map"></a>BEGIN_INTERFACE_MAP

Avvia la definizione della mappa interfaccita quando viene utilizzata nel file di implementazione.

### <a name="syntax"></a>Sintassi

```
BEGIN_INTERFACE_MAP( theClass, baseClass )
```

### <a name="parameters"></a>Parametri

*theClass*<br/>
Classe in cui deve essere definita la mappa dell'interfaccia

*baseClass*<br/>
Classe da cui deriva *theClass* .

### <a name="remarks"></a>Osservazioni

Per ogni interfaccia implementata, è presente una o più chiamate a INTERFACE_PART macro. Per ogni aggregazione utilizzata dalla classe, esiste una chiamata INTERFACE_AGGREGATE macro.

Per ulteriori informazioni sulle mappe delle interfacce, vedere la [Nota tecnica 38](../tn038-mfc-ole-iunknown-implementation.md).

### <a name="requirements"></a>Requisiti

**Intestazione:** afxwin.h

##  <a name="commandhandler"></a>Delegato CommandHandler

Registra i metodi di callback con un comando di origine.

### <a name="syntax"></a>Sintassi

```
delegate void CommandHandler(  UINT^ cmdID  );
```

### <a name="parameters"></a>Parametri

*cmdID*<br/>
ID di comando.

### <a name="remarks"></a>Osservazioni

Questo delegato registra i metodi di callback con un comando di origine. Quando si aggiunge un delegato all'oggetto origine del comando, il metodo di callback diventa un gestore per i comandi provenienti dall'origine specificata.

Per altre informazioni, vedere [procedura: aggiungere il routing dei comandi al controllo Windows Forms](../../dotnet/how-to-add-command-routing-to-the-windows-forms-control.md).

Per ulteriori informazioni sull'utilizzo di Windows Forms, vedere [utilizzo di un controllo utente Windows Form in MFC](../../dotnet/using-a-windows-form-user-control-in-mfc.md).

### <a name="requirements"></a>Requisiti

**Intestazione:** afxwinforms. h (definita nell'assembly atlmfc\lib\mfcmifc80.dll)

##  <a name="commanduihandler"></a>CommandUIHandler

Registra i metodi di callback con un messaggio di comando di aggiornamento dell'interfaccia utente.

### <a name="syntax"></a>Sintassi

```
delegate void CommandUIHandler(  unsigned int cmdID, ICommandUI^ cmdUI);
```

### <a name="parameters"></a>Parametri

*cmdID*<br/>
ID di comando.

*cmdUI*<br/>
ID del messaggio di comando.

### <a name="remarks"></a>Osservazioni

Questo delegato registra i metodi di callback con un messaggio di comando di aggiornamento dell'interfaccia utente. `CommandUIHandler` è simile a [CommandHandler](#commandhandler) , con la differenza che questo delegato viene usato con i comandi di aggiornamento dell'oggetto dell'interfaccia utente. I comandi di aggiornamento dell'interfaccia utente devono essere mappati uno-a-uno con i metodi di gestione messaggi.

Per ulteriori informazioni sull'utilizzo di Windows Forms, vedere [utilizzo di un controllo utente Windows Form in MFC](../../dotnet/using-a-windows-form-user-control-in-mfc.md).

### <a name="requirements"></a>Requisiti

**Intestazione:** afxwinforms. h (definita nell'assembly atlmfc\lib\mfcmifc80.dll)

##  <a name="end_delegate_map"></a>END_DELEGATE_MAP

Termina una mappa di delegati.

### <a name="syntax"></a>Sintassi

```
END_DELEGATE_MAP();
```

### <a name="remarks"></a>Osservazioni

Questa macro contrassegna la fine di un elenco di voci Delegate, che compongono una mappa di delegati. Per un esempio di utilizzo di questa macro, vedere [EVENT_DELEGATE_ENTRY](#event_delegate_entry).

### <a name="requirements"></a>Requisiti

**Intestazione:** msclr\event.h

##  <a name="end_interface_map"></a>END_INTERFACE_MAP

Termina la mappa dell'interfaccia nel file di implementazione.

### <a name="syntax"></a>Sintassi

```
END_INTERFACE_MAP( )
```

### <a name="remarks"></a>Osservazioni

Per ulteriori informazioni sulle mappe dell'interfaccia, vedere la [Nota tecnica 38](../tn038-mfc-ole-iunknown-implementation.md).

### <a name="requirements"></a>Requisiti

**Intestazione:** afxwin.h

##  <a name="event_delegate_entry"></a>EVENT_DELEGATE_ENTRY

Crea una voce nella mappa di delegati.

### <a name="syntax"></a>Sintassi

```
EVENT_DELEGATE_ENTRY(MEMBER, ARG0, ARG1);
```

### <a name="parameters"></a>Parametri

*MEMBRO*<br/>
Metodo del gestore eventi da aggiungere al controllo.

*ARG0*<br/>
Primo argomento del metodo del gestore eventi gestito, ad esempio `Object^`.

*ARG1*<br/>
Secondo argomento del metodo del gestore eventi gestito, ad esempio `EventArgs^`.

### <a name="remarks"></a>Osservazioni

Ogni voce della mappa del delegato corrisponde a un delegato del gestore eventi gestito creato da [MAKE_DELEGATE](#make_delegate).

### <a name="example"></a>Esempio

Nell'esempio di codice seguente viene illustrato come utilizzare EVENT_DELEGATE_ENTRY per creare una voce nella mappa di delegati per il gestore eventi `OnClick`; vedere anche l'esempio di codice in MAKE_DELEGATE. Per altre informazioni, vedere [procedura: eseguire il sink di eventi Windows Forms C++ da classi native](../../dotnet/how-to-sink-windows-forms-events-from-native-cpp-classes.md).

```cpp
BEGIN_DELEGATE_MAP(CMyView)
   EVENT_DELEGATE_ENTRY(OnClick, System::Object^, System::EventArgs^)
END_DELEGATE_MAP()
```

### <a name="requirements"></a>Requisiti

**Intestazione:** msclr\event.h

##  <a name="interface_part"></a>INTERFACE_PART

Utilizzato tra la macro BEGIN_INTERFACE_MAP e la macro END_INTERFACE_MAP per ogni interfaccia che l'oggetto supporterà.

### <a name="syntax"></a>Sintassi

```
INTERFACE_PART( theClass, iid, localClass)
```

### <a name="parameters"></a>Parametri

*theClass*<br/>
Nome della classe che contiene la mappa dell'interfaccia.
*IID*<br/>
IID di cui deve essere eseguito il mapping alla classe incorporata.
*localClass*<br/>
Nome della classe locale.

### <a name="remarks"></a>Osservazioni

Consente di eseguire il mapping di un IID a un membro della classe indicata da *theClass* e *localClass*.

Per ulteriori informazioni sulle mappe delle interfacce, vedere la [Nota tecnica 38](../tn038-mfc-ole-iunknown-implementation.md).

### <a name="requirements"></a>Requisiti

**Intestazione:** afxwin.h

##  <a name="make_delegate"></a>MAKE_DELEGATE

Connette un gestore eventi a un controllo gestito.

### <a name="syntax"></a>Sintassi

```
MAKE_DELEGATE( DELEGATE,  MEMBER) ;
```

### <a name="parameters"></a>Parametri

*Delegato*<br/>
Tipo del delegato del gestore eventi gestito, ad esempio [EventHandler](assetId:///T:System.EventHandler?qualifyHint=False&autoUpgrade=True).

*MEMBRO*<br/>
Nome del metodo del gestore eventi da associare al controllo.

### <a name="remarks"></a>Osservazioni

Questa macro crea un delegato del gestore eventi gestito di tipo *delegate* e del *membro*Name. Il delegato del gestore eventi gestito consente a una classe nativa di gestire gli eventi gestiti.

### <a name="example"></a>Esempio

Nell'esempio di codice seguente viene illustrato come chiamare `MAKE_DELEGATE` per alleghire un gestore eventi `OnClick` a una `MyControl`di controllo MFC. Per una spiegazione più ampia del funzionamento di questa macro in un'applicazione MFC, vedere [procedura: eseguire il sink di eventi Windows Forms C++ da classi native](../../dotnet/how-to-sink-windows-forms-events-from-native-cpp-classes.md).

```cpp
// CMyView derives from CWinFormsView.
void CMyView::OnInitialUpdate()
{
   CWinFormsView::OnInitialUpdate();

   GetControl()->Click += MAKE_DELEGATE(System::EventHandler, OnClick);
}
```

### <a name="requirements"></a>Requisiti

**Intestazione:** msclr\event.h

## <a name="see-also"></a>Vedere anche

[Procedura: Elaborare eventi di Windows Form da classi C++ native](../../dotnet/how-to-sink-windows-forms-events-from-native-cpp-classes.md)<br/>
[Procedura: Aggiungere il routing dei comandi al controllo Windows Form](../../dotnet/how-to-add-command-routing-to-the-windows-forms-control.md)<br/>
[Macro e globali](mfc-macros-and-globals.md)<br/>
