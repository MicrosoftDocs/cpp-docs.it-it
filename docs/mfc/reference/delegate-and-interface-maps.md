---
title: Delegato e macro di mappa dell'interfaccia (MFC)
ms.date: 03/30/2017
helpviewer_keywords:
- delegate map macros [MFC]
- event map macros [MFC]
- interface map macros [MFC]
ms.assetid: 3840e642-ff7d-4bdc-998b-c7d8fc50890e
ms.openlocfilehash: 8f48b916f7130551fc8d4da5bb2ebc75d8d728d5
ms.sourcegitcommit: bd637e9c39650cfd530520ea978a22fa4caa0e42
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/07/2019
ms.locfileid: "55850203"
---
# <a name="delegate-and-interface-map-macros"></a>Macro della mappa dell'interfaccia e delegato

MFC supporta queste macro per mappe dell'interfaccia e delegato:

|||
|-|-|
|[BEGIN_DELEGATE_MAP](#begin_delegate_map)|Inizia una mappa di delegato.|
|[BEGIN_INTERFACE_MAP](#begin_interface_map)|Inizia la definizione della mappa interfaced.|
|[CommandHandler (delegato)](#commandhandler)|Registra i metodi di callback con un comando di origine.  |
|[END_DELEGATE_MAP](#end_delegate_map)|Termina una mappa di delegato.|
|[END_INTERFACE_MAP](#end_interface_map)|Termina la mappa dell'interfaccia nel file di implementazione. |
|[EVENT_DELEGATE_ENTRY](#event_delegate_entry)|Crea una voce nella mappa di delegati.|
|[INTERFACE_PART](#interface_part)|Usato tra la macro BEGIN_INTERFACE_MAP ed end_interface_map (macro) per ogni interfaccia di che verranno supportate dall'oggetto.|
|[MAKE_DELEGATE](#make_delegate)|Associa un gestore eventi a un controllo gestito.|

## <a name="begin_delegate_map"></a> BEGIN_DELEGATE_MAP

Inizia una mappa di delegato.

### <a name="syntax"></a>Sintassi

```
BEGIN_DELEGATE_MAP(  CLASS );
```

### <a name="parameters"></a>Parametri

*CLASS*<br/>
La classe in cui è ospitato il controllo gestito.

### <a name="remarks"></a>Note

Questa macro contrassegna l'inizio di un elenco di voci di delegato, che costituiscono una mappa di delegato. Per un esempio dell'utilizzo di questa macro, vedere [EVENT_DELEGATE_ENTRY](#event_delegate_entry).

### <a name="requirements"></a>Requisiti

**Intestazione:** msclr\event.h

##  <a name="begin_interface_map"></a>BEGIN_INTERFACE_MAP

Inizia la definizione della mappa interfaced quando utilizzato nel file di implementazione.

### <a name="syntax"></a>Sintassi

```
BEGIN_INTERFACE_MAP( theClass, baseClass )
```

### <a name="parameters"></a>Parametri

*theClass*<br/>
Classe in cui deve essere definita la mappa dell'interfaccia

*baseClass*<br/>
La classe da cui *theClass* deriva da.

### <a name="remarks"></a>Note

Per ogni interfaccia implementata, è disponibile uno o più chiamate della macro INTERFACE_PART. Per ogni aggregato usato dalla classe, è disponibile una singola chiamata di macro INTERFACE_AGGREGATE.

Per altre informazioni sulle mappe dell'interfaccia, vedere [Nota tecnica 38](../tn038-mfc-ole-iunknown-implementation.md).

### <a name="requirements"></a>Requisiti

**Intestazione:** afxwin.h

##  <a name="commandhandler"></a>CommandHandler (delegato)

Registra i metodi di callback con un comando di origine.

### <a name="syntax"></a>Sintassi

```
delegate void CommandHandler(  UINT^ cmdID  );
```

### <a name="parameters"></a>Parametri

*cmdID*<br/>
ID di comando.

### <a name="remarks"></a>Note

Questo delegato registra i metodi di callback con un comando di origine. Quando si aggiunge un delegato all'oggetto origine del comando, il metodo di callback diventa un gestore per i comandi provenienti dall'origine specificata.

Per altre informazioni, vedere [Procedura: Comando Aggiungi controllo Routing per i Windows Form](../../dotnet/how-to-add-command-routing-to-the-windows-forms-control.md).

Per altre informazioni sull'uso di Windows Form, vedere [usando un controllo utente di Windows Form in MFC](../../dotnet/using-a-windows-form-user-control-in-mfc.md).

### <a name="requirements"></a>Requisiti

**Intestazione:** afxwinforms. h (definito nell'assembly atlmfc\lib\mfcmifc80.dll)

##  <a name="commanduihandler"></a>CommandUIHandler

Registra i metodi di callback con un messaggio di comando update dell'interfaccia utente.

### <a name="syntax"></a>Sintassi

```
delegate void CommandUIHandler(  unsigned int cmdID, ICommandUI^ cmdUI);
```

### <a name="parameters"></a>Parametri

*cmdID*<br/>
ID di comando.

*cmdUI*<br/>
L'ID di messaggio di comando.

### <a name="remarks"></a>Note

Questo delegato registra i metodi di callback con un messaggio di comando update dell'interfaccia utente. `CommandUIHandler` è simile a [CommandHandler](#commandhandler) ad eccezione del fatto che questo delegato viene usato con comandi di aggiornamento oggetto dell'interfaccia utente. Comandi di aggiornamento dell'interfaccia utente devono essere mappati uno a uno con i metodi del gestore di messaggi.

Per altre informazioni sull'uso di Windows Form, vedere [usando un controllo utente di Windows Form in MFC](../../dotnet/using-a-windows-form-user-control-in-mfc.md).

### <a name="requirements"></a>Requisiti

**Intestazione:** afxwinforms. h (definito nell'assembly atlmfc\lib\mfcmifc80.dll)

##  <a name="end_delegate_map"></a>END_DELEGATE_MAP

Termina una mappa di delegato.

### <a name="syntax"></a>Sintassi

```
END_DELEGATE_MAP();
```

### <a name="remarks"></a>Note

Questa macro contrassegna la fine di un elenco di voci di delegato, che costituiscono una mappa di delegato. Per un esempio dell'utilizzo di questa macro, vedere [EVENT_DELEGATE_ENTRY](#event_delegate_entry).

### <a name="requirements"></a>Requisiti

**Intestazione:** msclr\event.h

##  <a name="end_interface_map"></a>END_INTERFACE_MAP

Termina la mappa dell'interfaccia nel file di implementazione.

### <a name="syntax"></a>Sintassi

```
END_INTERFACE_MAP( )
```

### <a name="remarks"></a>Note

Per altre informazioni sulle mappe dell'interfaccia, vedere [Nota tecnica 38](../tn038-mfc-ole-iunknown-implementation.md).

### <a name="requirements"></a>Requisiti

**Intestazione:** afxwin.h

##  <a name="event_delegate_entry"></a>EVENT_DELEGATE_ENTRY

Crea una voce nella mappa di delegati.

### <a name="syntax"></a>Sintassi

```
EVENT_DELEGATE_ENTRY(MEMBER, ARG0, ARG1);
```

### <a name="parameters"></a>Parametri

*MEMBER*<br/>
Metodo del gestore eventi da aggiungere al controllo.

*ARG0*<br/>
Il primo argomento del metodo del gestore eventi gestito, ad esempio `Object^`.

*ARG1*<br/>
Il secondo argomento del metodo del gestore eventi gestito, ad esempio `EventArgs^`.

### <a name="remarks"></a>Note

Ogni voce della mappa di delegati corrisponde a un delegato del gestore eventi gestito creato dal [MAKE_DELEGATE](#make_delegate).

### <a name="example"></a>Esempio

Esempio di codice seguente viene illustrato come utilizzare EVENT_DELEGATE_ENTRY per creare una voce della mappa di delegati per il `OnClick` gestore eventi; vedere l'esempio di codice in MAKE_DELEGATE anche. Per altre informazioni, vedere [Procedura: Elaborare eventi di Windows Form da classi C++ Native](../../dotnet/how-to-sink-windows-forms-events-from-native-cpp-classes.md).

```cpp
BEGIN_DELEGATE_MAP(CMyView)
   EVENT_DELEGATE_ENTRY(OnClick, System::Object^, System::EventArgs^)
END_DELEGATE_MAP()
```

### <a name="requirements"></a>Requisiti

**Intestazione:** msclr\event.h

##  <a name="interface_part"></a>INTERFACE_PART

Usato tra la macro BEGIN_INTERFACE_MAP ed end_interface_map (macro) per ogni interfaccia di che verranno supportate dall'oggetto.

### <a name="syntax"></a>Sintassi

```
INTERFACE_PART( theClass, iid, localClass)
```

### <a name="parameters"></a>Parametri

*theClass*<br/>
Nome della classe che contiene la mappa dell'interfaccia.
*iid*<br/>
IID che deve essere eseguito il mapping alla classe incorporata.
*localClass*<br/>
Il nome della classe locale.

### <a name="remarks"></a>Note

Consente di eseguire il mapping di un IID a un membro della classe indicata da *theClass* e *localClass*.

Per altre informazioni sulle mappe dell'interfaccia, vedere [Nota tecnica 38](../tn038-mfc-ole-iunknown-implementation.md).

### <a name="requirements"></a>Requisiti

**Intestazione:** afxwin.h

##  <a name="make_delegate"></a>MAKE_DELEGATE

Associa un gestore eventi a un controllo gestito.

### <a name="syntax"></a>Sintassi

```
MAKE_DELEGATE( DELEGATE,  MEMBER) ;
```

### <a name="parameters"></a>Parametri

*DELEGATO*<br/>
Delegare il tipo del gestore eventi gestito, ad esempio [EventHandler](assetId:///T:System.EventHandler?qualifyHint=False&autoUpgrade=True).

*MEMBER*<br/>
Il nome del metodo del gestore eventi da associare al controllo.

### <a name="remarks"></a>Note

Questa macro crea un delegato del gestore eventi gestito typu *DELEGARE* e del nome della *membro*. Il delegato del gestore eventi gestito consente a una classe nativa gestire gli eventi gestiti.

### <a name="example"></a>Esempio

Esempio di codice seguente viene illustrato come chiamare `MAKE_DELEGATE` per collegare un' `OnClick` gestore eventi da un controllo MFC `MyControl`. Per una descrizione dettagliata del funzionamento di questa macro in un'applicazione MFC, vedere [come: Elaborare eventi di Windows Form da classi C++ Native](../../dotnet/how-to-sink-windows-forms-events-from-native-cpp-classes.md).

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
[Macro e funzioni globali](mfc-macros-and-globals.md)<br/>
