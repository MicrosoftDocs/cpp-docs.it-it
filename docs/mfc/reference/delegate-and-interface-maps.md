---
title: Delegato e interfaccia mappa macro (MFC) | Documenti Microsoft
ms.custom: ''
ms.date: 03/30/2017
ms.technology:
- cpp-mfc
ms.topic: reference
dev_langs:
- C++
helpviewer_keywords:
- delegate map macros [MFC]
- event map macros [MFC]
- interface map macros [MFC]
ms.assetid: 3840e642-ff7d-4bdc-998b-c7d8fc50890e
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: d817ec62734b3646c4df0977daa8161601e5c592
ms.sourcegitcommit: 208d445fd7ea202de1d372d3f468e784e77bd666
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/29/2018
ms.locfileid: "37122692"
---
|||  
|-|-|  
|[BEGIN_DELEGATE_MAP](#begin_delegate_map)|Inizia una mappa di delegati.|
|[BEGIN_INTERFACE_MAP](#begin_interface_map)|Inizia la definizione della mappa interfaced.|
|[CommandHandler (delegato)](#commandhandler)|Registra i metodi di callback con un comando di origine.  |
|[END_DELEGATE_MAP](#end_delegate_map)|Termina una mappa di delegati.|
|[END_INTERFACE_MAP](#end_interface_map)|Termina la mappa dell'interfaccia nel file di implementazione. |
|[EVENT_DELEGATE_ENTRY](#event_delegate_entry)|Crea una voce nella mappa di delegati.|
|[INTERFACE_PART](#interface_part)|Utilizzato tra la macro BEGIN_INTERFACE_MAP ed END_INTERFACE_MAP (macro) per ogni interfaccia che verranno supportate dall'oggetto.|
|[MAKE_DELEGATE](#make_delegate)|Collega un gestore eventi a un controllo gestito.|


## <a name="begin_delegate_map"></a> BEGIN_DELEGATE_MAP
Inizia una mappa di delegati.  
   
### <a name="syntax"></a>Sintassi    
```  
BEGIN_DELEGATE_MAP(  CLASS );  
```
### <a name="parameters"></a>Parametri  
 *(CLASSE)*  
 La classe in cui è ospitato il controllo gestito.  
   
### <a name="remarks"></a>Note  
 Questa macro contrassegna l'inizio di un elenco di voci di delegato, che costituiscono una mappa di delegati. Per un esempio dell'utilizzo di questa macro, vedere [EVENT_DELEGATE_ENTRY](#event_delegate_entry).  
   
### <a name="requirements"></a>Requisiti  
 **Intestazione:** msclr\event.h  
   
### <a name="see-also"></a>Vedere anche  
 [Procedura: Elaborare eventi di Windows Form da classi C++ native](../../dotnet/how-to-sink-windows-forms-events-from-native-cpp-classes.md)
 
##  <a name="begin_interface_map"></a>BEGIN_INTERFACE_MAP
Inizia la definizione della mappa interfaced utilizzato nel file di implementazione.  
   
### <a name="syntax"></a>Sintassi    
```
BEGIN_INTERFACE_MAP( theClass, baseClass )  
```
### <a name="parameters"></a>Parametri  
 *theClass*  
 Classe in cui deve essere definita la mappa dell'interfaccia  
  
 *baseClass*  
 La classe da cui *theClass* deriva da.  
   
### <a name="remarks"></a>Note  
 Per ogni interfaccia implementata, è disponibile uno o più chiamate della macro INTERFACE_PART. Per ogni aggregato usato dalla classe, è disponibile una singola chiamata di macro INTERFACE_AGGREGATE.  
  
 Per ulteriori informazioni sulle mappe dell'interfaccia, vedere [Nota tecnica 38](../tn038-mfc-ole-iunknown-implementation.md).  
   
### <a name="requirements"></a>Requisiti  
 **Intestazione:** afxwin.h  
 
##  <a name="commandhandler"></a>CommandHandler (delegato)
Registra i metodi di callback con un comando di origine.  
   
### <a name="syntax"></a>Sintassi    
```  
delegate void CommandHandler(  UINT^ cmdID  );  
```
### <a name="parameters"></a>Parametri  
 *cmdID*  
 ID di comando.  
   
### <a name="remarks"></a>Note  
 Questo delegato registra i metodi di callback con un comando di origine. Quando si aggiunge un delegato all'oggetto origine del comando, il metodo di callback diventa un gestore per i comandi provenienti dall'origine specificata.  
  
 Per altre informazioni, vedere [procedura: aggiungere comandi (Routing) per il controllo Windows Form](../../dotnet/how-to-add-command-routing-to-the-windows-forms-control.md).  
  
 Per ulteriori informazioni sull'utilizzo di Windows Form, vedere [utilizzo di un controllo utente Windows Form in MFC](../../dotnet/using-a-windows-form-user-control-in-mfc.md).  
   
### <a name="requirements"></a>Requisiti  
 **Intestazione:** afxwinforms. h (definito nell'assembly atlmfc\lib\mfcmifc80.dll)  
   
### <a name="see-also"></a>Vedere anche  
 [Procedura: Aggiungere il routing dei comandi al controllo Windows Form](../../dotnet/how-to-add-command-routing-to-the-windows-forms-control.md)
 
##  <a name="commanduihandler"></a>CommandUIHandler
Registra i metodi di callback con un messaggio di comando update dell'interfaccia utente.  
   
### <a name="syntax"></a>Sintassi    
```  
delegate void CommandUIHandler(  unsigned int cmdID, ICommandUI^ cmdUI);  
```
### <a name="parameters"></a>Parametri  
 *cmdID*  
 ID di comando.  
  
 *cmdUI*  
 ID comando del messaggio.  
   
### <a name="remarks"></a>Note  
 Questo delegato registra i metodi di callback con un messaggio di comando update dell'interfaccia utente. `CommandUIHandler` è simile a [CommandHandler](#commandhandler) ad eccezione del fatto che il delegato viene usato con comandi di aggiornamento oggetto dell'interfaccia utente. Comandi di aggiornamento dell'interfaccia utente devono essere eseguito il mapping uno a uno con i metodi del gestore messaggi.  
  
 Per ulteriori informazioni sull'utilizzo di Windows Form, vedere [utilizzo di un controllo utente Windows Form in MFC](../../dotnet/using-a-windows-form-user-control-in-mfc.md).  
   
### <a name="requirements"></a>Requisiti  
 **Intestazione:** afxwinforms. h (definito nell'assembly atlmfc\lib\mfcmifc80.dll)  
   
### <a name="see-also"></a>Vedere anche  
 [Procedura: aggiungere comandi controllo Routing Windows Form](../../dotnet/how-to-add-command-routing-to-the-windows-forms-control.md)   
 [CommandHandler](#commandhandler)

##  <a name="end_delegate_map"></a>END_DELEGATE_MAP
Termina una mappa di delegati.  
   
### <a name="syntax"></a>Sintassi    
```  
END_DELEGATE_MAP();  
```  
   
### <a name="remarks"></a>Note  
 Questa macro contrassegna la fine di un elenco di voci di delegato, che costituiscono una mappa di delegati. Per un esempio dell'utilizzo di questa macro, vedere [EVENT_DELEGATE_ENTRY](#event_delegate_entry).  
   
### <a name="requirements"></a>Requisiti  
 **Intestazione:** msclr\event.h  
   
### <a name="see-also"></a>Vedere anche  

 [Procedura: Elaborare eventi di Windows Form da classi C++ native](../../dotnet/how-to-sink-windows-forms-events-from-native-cpp-classes.md)

 
##  <a name="end_interface_map"></a>END_INTERFACE_MAP
Termina la mappa dell'interfaccia nel file di implementazione.  
   
### <a name="syntax"></a>Sintassi    
```
END_INTERFACE_MAP( )    
```  
   
### <a name="remarks"></a>Note  
 Per ulteriori informazioni sulle mappe dell'interfaccia, vedere [Nota tecnica 38](../tn038-mfc-ole-iunknown-implementation.md).  
   
### <a name="requirements"></a>Requisiti  
 **Intestazione:** afxwin.h  
   
### <a name="see-also"></a>Vedere anche  
 [Macro e funzioni globali](mfc-macros-and-globals.md)   
 [BEGIN_INTERFACE_MAP](#begin_interface_map)
 

##  <a name="event_delegate_entry"></a>EVENT_DELEGATE_ENTRY
Crea una voce nella mappa di delegati.  
   
### <a name="syntax"></a>Sintassi    
```  
EVENT_DELEGATE_ENTRY(MEMBER, ARG0, ARG1);  
```
### <a name="parameters"></a>Parametri  
 *MEMBRO*  
 Metodo del gestore eventi da aggiungere al controllo.  
  
 *ARG0*  
 Il primo argomento del metodo del gestore eventi gestito, ad esempio `Object^`.  
  
 *ARG1*  
 Il secondo argomento del metodo del gestore eventi gestito, ad esempio `EventArgs^`.  
   
### <a name="remarks"></a>Note  
 Ogni voce della mappa di delegati corrisponde a un delegato del gestore eventi gestito creato [MAKE_DELEGATE](#make_delegate).  
   
### <a name="example"></a>Esempio  
 Esempio di codice seguente viene illustrato come utilizzare EVENT_DELEGATE_ENTRY per creare una voce della mappa di delegati per la `OnClick` gestore; vedere l'esempio di codice in MAKE_DELEGATE anche. Per altre informazioni, vedere [procedura: Sink di eventi di Windows Form da classi C++ Native](../../dotnet/how-to-sink-windows-forms-events-from-native-cpp-classes.md).  
  
 ```cpp
BEGIN_DELEGATE_MAP(CMyView)
   EVENT_DELEGATE_ENTRY(OnClick, System::Object^, System::EventArgs^)
END_DELEGATE_MAP()

```  
   
### <a name="requirements"></a>Requisiti  
 **Intestazione:** msclr\event.h  
   
### <a name="see-also"></a>Vedere anche  
 [MAKE_DELEGATE](#make_delegate)   
 [BEGIN_DELEGATE_MAP](#begin_delegate_map)   
 [END_DELEGATE_MAP](#end_delegate_map)
 

##  <a name="interface_part"></a>INTERFACE_PART
Utilizzato tra la macro BEGIN_INTERFACE_MAP ed END_INTERFACE_MAP (macro) per ogni interfaccia che verranno supportate dall'oggetto.  
   
### <a name="syntax"></a>Sintassi    
```
INTERFACE_PART( theClass, iid, localClass)  
```
### <a name="parameters"></a>Parametri  
 *theClass*  
 Nome della classe che contiene la mappa dell'interfaccia.    
 *IID*  
 IID che è necessario eseguire il mapping alla classe incorporata.    
 *localClass*  
 Il nome della classe locale.  
   
### <a name="remarks"></a>Note  
 Consente di eseguire il mapping di un IID a un membro della classe indicata dal *theClass* e *localClass*.  
  
 Per ulteriori informazioni sulle mappe dell'interfaccia, vedere [Nota tecnica 38](../tn038-mfc-ole-iunknown-implementation.md).  
   
### <a name="requirements"></a>Requisiti  
 **Intestazione:** afxwin.h  
   
 
##  <a name="make_delegate"></a>MAKE_DELEGATE
Collega un gestore eventi a un controllo gestito.  
   
### <a name="syntax"></a>Sintassi    
```  
MAKE_DELEGATE( DELEGATE,  MEMBER) ;  
```
### <a name="parameters"></a>Parametri  
 *DELEGATO*  
 Delegare il tipo del gestore eventi gestito, ad esempio [EventHandler](assetId:///T:System.EventHandler?qualifyHint=False&autoUpgrade=True).  
  
 *MEMBRO*  
 Il nome del metodo del gestore eventi da collegare al controllo.  
   
### <a name="remarks"></a>Note  
 Questa macro crea un delegato del gestore eventi gestito di tipo *DELEGARE* e del nome *membro*. Delegato del gestore eventi gestito consente a una classe nativa gestire gli eventi gestiti.  
   
### <a name="example"></a>Esempio  
 Esempio di codice seguente viene illustrato come chiamare `MAKE_DELEGATE` collegare un' `OnClick` gestore dell'evento a un controllo MFC `MyControl`. Per una descrizione dettagliata del funzionamento di questa macro in un'applicazione MFC, vedere [procedura: Sink di eventi di Windows Form da classi C++ Native](../../dotnet/how-to-sink-windows-forms-events-from-native-cpp-classes.md).  
  
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
   
### <a name="see-also"></a>Vedere anche  
 [BEGIN_DELEGATE_MAP](#begin_delegate_map)   
 [END_DELEGATE_MAP](#end_delegate_map)   
 [EVENT_DELEGATE_ENTRY](#event_delegate_entry)
 



