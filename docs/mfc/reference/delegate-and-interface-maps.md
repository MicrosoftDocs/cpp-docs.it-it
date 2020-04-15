---
title: Delegare e macro della mappa dell'interfaccia (MFC)Delegate and Interface Map Macros (MFC)
ms.date: 03/30/2017
helpviewer_keywords:
- delegate map macros [MFC]
- event map macros [MFC]
- interface map macros [MFC]
ms.assetid: 3840e642-ff7d-4bdc-998b-c7d8fc50890e
ms.openlocfilehash: e08597d024f5e3a74dcf47363ad3de0aa60cf6c0
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81365832"
---
# <a name="delegate-and-interface-map-macros"></a>Macro per le mappe di interfaccia e delegati

MFC supporta queste macro per le mappe delegato e di interfaccia:

|||
|-|-|
|[BEGIN_DELEGATE_MAP](#begin_delegate_map)|Avvia una mappa dei delegati.|
|[BEGIN_INTERFACE_MAP](#begin_interface_map)|Avvia la definizione della mappa con interfaccia.|
|[Delegato CommandHandler](#commandhandler)|Registra i metodi di callback con un comando di origine.  |
|[END_DELEGATE_MAP](#end_delegate_map)|Termina una mappa dei delegati.|
|[END_INTERFACE_MAP](#end_interface_map)|Termina la mappa dell'interfaccia nel file di implementazione. |
|[EVENT_DELEGATE_ENTRY](#event_delegate_entry)|Crea una voce nella mappa di delegati.|
|[INTERFACE_PART](#interface_part)|Utilizzato tra la macro BEGIN_INTERFACE_MAP e la macro END_INTERFACE_MAP per ogni interfaccia supportata dall'oggetto.|
|[MAKE_DELEGATE](#make_delegate)|Associa un gestore eventi a un controllo gestito.|

## <a name="begin_delegate_map"></a><a name="begin_delegate_map"></a>BEGIN_DELEGATE_MAP

Avvia una mappa dei delegati.

### <a name="syntax"></a>Sintassi

```
BEGIN_DELEGATE_MAP(  CLASS );
```

### <a name="parameters"></a>Parametri

*Classe*<br/>
Classe in cui è ospitato il controllo gestito.

### <a name="remarks"></a>Osservazioni

Questa macro segna l'inizio di un elenco di voci delegate, che compongono una mappa dei delegati. Per un esempio di utilizzo di questa macro, vedere [EVENT_DELEGATE_ENTRY](#event_delegate_entry).

### <a name="requirements"></a>Requisiti

**Intestazione:** msclr.event.h

## <a name="begin_interface_map"></a><a name="begin_interface_map"></a>BEGIN_INTERFACE_MAP

Avvia la definizione della mappa con interfaccia quando viene utilizzata nel file di implementazione.

### <a name="syntax"></a>Sintassi

```
BEGIN_INTERFACE_MAP( theClass, baseClass )
```

### <a name="parameters"></a>Parametri

*classe theClass*<br/>
Classe in cui deve essere definita la mappa dell'interfaccia

*Baseclass*<br/>
Classe da cui *deriva la classe.*

### <a name="remarks"></a>Osservazioni

Per ogni interfaccia implementata, è presente una o più chiamate di macro INTERFACE_PART. Per ogni aggregazione utilizzata dalla classe, esiste un INTERFACE_AGGREGATE chiamata di macro.

Per ulteriori informazioni sulle mappe di interfaccia, vedere [Nota tecnica 38](../tn038-mfc-ole-iunknown-implementation.md).

### <a name="requirements"></a>Requisiti

**Intestazione:** afxwin.h

## <a name="commandhandler-delegate"></a><a name="commandhandler"></a>Delegato CommandHandler

Registra i metodi di callback con un comando di origine.

### <a name="syntax"></a>Sintassi

```
delegate void CommandHandler(  UINT^ cmdID  );
```

### <a name="parameters"></a>Parametri

*cmdID (informazioni in stato in com*<br/>
ID di comando.

### <a name="remarks"></a>Osservazioni

Questo delegato registra i metodi di callback con un comando di origine. Quando si aggiunge un delegato all'oggetto origine del comando, il metodo di callback diventa un gestore per i comandi provenienti dall'origine specificata.

Per ulteriori informazioni, vedere [Procedura: aggiungere](../../dotnet/how-to-add-command-routing-to-the-windows-forms-control.md)il routing dei comandi al controllo Windows Form .

Per ulteriori informazioni sull'utilizzo di Windows Form, vedere [Utilizzo di un controllo utente Windows Form in MFC](../../dotnet/using-a-windows-form-user-control-in-mfc.md).

### <a name="requirements"></a>Requisiti

**Intestazione:** afxwinforms.h (definita nell'assembly atlmfc.lib.mfcmifc80.dll)

## <a name="commanduihandler"></a><a name="commanduihandler"></a>CommandUIHandlerCommandUIHandler

Registra i metodi di callback con un messaggio di comando di aggiornamento dell'interfaccia utente.

### <a name="syntax"></a>Sintassi

```
delegate void CommandUIHandler(  unsigned int cmdID, ICommandUI^ cmdUI);
```

### <a name="parameters"></a>Parametri

*cmdID (informazioni in stato in com*<br/>
ID di comando.

*cmdUI (informazioni in stato inquesto*<br/>
ID del messaggio di comando.

### <a name="remarks"></a>Osservazioni

Questo delegato registra i metodi di callback con un messaggio di comando di aggiornamento dell'interfaccia utente. `CommandUIHandler`è simile a [CommandHandler,](#commandhandler) ad eccezione del fatto che questo delegato viene utilizzato con i comandi di aggiornamento degli oggetti dell'interfaccia utente. I comandi di aggiornamento dell'interfaccia utente devono essere mappati uno a uno con i metodi del gestore messaggi.

Per ulteriori informazioni sull'utilizzo di Windows Form, vedere [Utilizzo di un controllo utente Windows Form in MFC](../../dotnet/using-a-windows-form-user-control-in-mfc.md).

### <a name="requirements"></a>Requisiti

**Intestazione:** afxwinforms.h (definita nell'assembly atlmfc.lib.mfcmifc80.dll)

## <a name="end_delegate_map"></a><a name="end_delegate_map"></a>END_DELEGATE_MAP

Termina una mappa dei delegati.

### <a name="syntax"></a>Sintassi

```
END_DELEGATE_MAP();
```

### <a name="remarks"></a>Osservazioni

Questa macro contrassegna la fine di un elenco di voci delegate, che compongono una mappa dei delegati. Per un esempio di utilizzo di questa macro, vedere [EVENT_DELEGATE_ENTRY](#event_delegate_entry).

### <a name="requirements"></a>Requisiti

**Intestazione:** msclr.event.h

## <a name="end_interface_map"></a><a name="end_interface_map"></a>END_INTERFACE_MAP

Termina la mappa dell'interfaccia nel file di implementazione.

### <a name="syntax"></a>Sintassi

```
END_INTERFACE_MAP( )
```

### <a name="remarks"></a>Osservazioni

Per ulteriori informazioni sulle mappe di interfaccia, vedere [la Nota tecnica 38](../tn038-mfc-ole-iunknown-implementation.md).

### <a name="requirements"></a>Requisiti

**Intestazione:** afxwin.h

## <a name="event_delegate_entry"></a><a name="event_delegate_entry"></a>EVENT_DELEGATE_ENTRY

Crea una voce nella mappa di delegati.

### <a name="syntax"></a>Sintassi

```
EVENT_DELEGATE_ENTRY(MEMBER, ARG0, ARG1);
```

### <a name="parameters"></a>Parametri

*Membro*<br/>
Metodo del gestore eventi da aggiungere al controllo.

*ARG0*<br/>
Primo argomento del metodo del gestore `Object^`eventi gestito, ad esempio .

*ARG1*<br/>
Secondo argomento del metodo del gestore `EventArgs^`eventi gestito, ad esempio .

### <a name="remarks"></a>Osservazioni

Ogni voce nella mappa dei delegati corrisponde a un delegato del gestore eventi gestiti creato da [MAKE_DELEGATE.](#make_delegate)

### <a name="example"></a>Esempio

Esempio di codice seguente viene illustrato come utilizzare EVENT_DELEGATE_ENTRY per `OnClick` creare una voce nella mappa dei delegati per il gestore eventi; vedere anche l'esempio di codice in MAKE_DELEGATE. Per ulteriori informazioni, vedere [Procedura: eseguire l'sink di eventi di Windows Form da classi c'è native.](../../dotnet/how-to-sink-windows-forms-events-from-native-cpp-classes.md)

```cpp
BEGIN_DELEGATE_MAP(CMyView)
   EVENT_DELEGATE_ENTRY(OnClick, System::Object^, System::EventArgs^)
END_DELEGATE_MAP()
```

### <a name="requirements"></a>Requisiti

**Intestazione:** msclr.event.h

## <a name="interface_part"></a><a name="interface_part"></a>INTERFACE_PART

Utilizzato tra la macro BEGIN_INTERFACE_MAP e la macro END_INTERFACE_MAP per ogni interfaccia supportata dall'oggetto.

### <a name="syntax"></a>Sintassi

```
INTERFACE_PART( theClass, iid, localClass)
```

### <a name="parameters"></a>Parametri

*classe theClass*<br/>
Nome della classe che contiene la mappa dell'interfaccia.
*Iid*<br/>
IID di cui deve essere mappato alla classe incorporata.
*localClass*<br/>
Nome della classe locale.

### <a name="remarks"></a>Osservazioni

Consente di eseguire il mapping di un IID a un membro della classe indicata da *theClass* e *localClass*.

Per ulteriori informazioni sulle mappe di interfaccia, vedere [Nota tecnica 38](../tn038-mfc-ole-iunknown-implementation.md).

### <a name="requirements"></a>Requisiti

**Intestazione:** afxwin.h

## <a name="make_delegate"></a><a name="make_delegate"></a>MAKE_DELEGATE

Associa un gestore eventi a un controllo gestito.

### <a name="syntax"></a>Sintassi

```
MAKE_DELEGATE( DELEGATE,  MEMBER) ;
```

### <a name="parameters"></a>Parametri

*Delegato*<br/>
Tipo del delegato del gestore eventi gestito, ad esempio [EventHandler](/dotnet/api/system.eventhandler).

*Membro*<br/>
Nome del metodo del gestore eventi da associare al controllo.

### <a name="remarks"></a>Osservazioni

Questa macro crea un delegato del gestore eventi gestiti di tipo *DELEGATE* e con il nome *MEMBER*. Il delegato del gestore eventi gestito consente a una classe nativa di gestire gli eventi gestiti.

### <a name="example"></a>Esempio

Nell'esempio di codice `MAKE_DELEGATE` riportato `OnClick` di seguito viene `MyControl`illustrato come chiamare per associare un gestore eventi a un controllo MFC . Per una spiegazione più ampia del funzionamento di questa macro in un'applicazione MFC, vedere Procedura: sink di eventi di [Windows Form da classi c'è native](../../dotnet/how-to-sink-windows-forms-events-from-native-cpp-classes.md).

```cpp
// CMyView derives from CWinFormsView.
void CMyView::OnInitialUpdate()
{
   CWinFormsView::OnInitialUpdate();

   GetControl()->Click += MAKE_DELEGATE(System::EventHandler, OnClick);
}
```

### <a name="requirements"></a>Requisiti

**Intestazione:** msclr.event.h

## <a name="see-also"></a>Vedere anche

[Procedura: elaborare eventi di Windows Form da classi C++ native](../../dotnet/how-to-sink-windows-forms-events-from-native-cpp-classes.md)<br/>
[Procedura: Aggiungere il routing dei comandi al controllo Windows Form](../../dotnet/how-to-add-command-routing-to-the-windows-forms-control.md)<br/>
[Macro e funzioni globali](mfc-macros-and-globals.md)<br/>
