---
title: "TN041: migrazione da MFC/OLE1 a MFC/OLE 2 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vc.mfc.ole"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "conversione di OLE1 in OLE2"
  - "migrazione da OLE1 a OLE2"
  - "migrazione [C++], OLE1 to OLE2"
  - "OLE1 [C++]"
  - "OLE2 [C++]"
  - "porting da OLE1 a OLE2"
  - "TN041"
  - "Visual C++ (aggiornamento di applicazioni), OLE1 to OLE2"
ms.assetid: 67f55552-4b04-4ddf-af0b-4d9eaf5da957
caps.latest.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 6
---
# TN041: migrazione da MFC/OLE1 a MFC/OLE 2
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

> [!NOTE]
>  La seguente nota tecnica non è stata aggiornata da quando è stata inclusa per la prima volta nella documentazione online.  Di conseguenza, alcune procedure e argomenti potrebbero essere non aggiornati o errati.  Per le informazioni più recenti, è consigliabile cercare l'argomento di interesse nell'indice della documentazione online.  
  
## Esempi generali relativi a migrazione  
 Uno degli obiettivi di progettazione per OLE 2 classi in MFC 2,5 e in alto\) era di mantenere gran parte della stessa architettura stabilita in MFC 2,0 per il supporto di OLE 1,0.  Di conseguenza, molte delle stesse classi OLE in MFC 2,0 sono ancora inclusi in questa versione di MFC \(`COleDocument`, `COleServerDoc`, `COleClientItem`, `COleServerItem`\).  Inoltre, molti API in queste classi sono identici.  Tuttavia, OLE 2 è modo diverso da OLE 1,0 in modo da poter prevedere che alcuni dettagli siano stati modificati.  Se si ha dimestichezza con il supporto di MFC 2.0 " s OLE1, si sentirete da casa con il supporto di MFC 2,0.  
  
 Se si prevede di un'applicazione esistente MFC\/OLE1 e aggiungere funzionalità OLE a 2, è consigliabile leggere questa nota per primo.  Questa nota vengono illustrati alcuni problemi che generali possono essere visualizzate quando forniscono la funzionalità OLE1 a MFC\/OLE 2 e quindi vengono illustrati i problemi come non gestito durante la comunicazione di due applicazioni incluse in MFC 2,0: OLE MFC samples [OCLIENT](../top/visual-cpp-samples.md) e [HIERSVR](../top/visual-cpp-samples.md).  
  
## L'architettura documento\/visualizzazione MFC è importante  
 Se l'applicazione non utilizza l'architettura documento\/visualizzazione MFC e si desidera aggiungere il supporto per OLE 2 all'applicazione, ora è il momento di passare al documento\/visualizzazione.  Molti dei vantaggi di OLE di MFC 2 classi vengono eseguite solo una volta che l'applicazione utilizza l'architettura e i componenti incorporate di MFC.  
  
 Implementazione di un server o un contenitore senza utilizzare l'architettura di MFC è possibile, ma non consigliato.  
  
## Implementazione di utilizzo MFC anziché personalizzati  
 MFC "implementazione eseguita la conversione boxing" classi come `CToolBar`, `CStatusBar` e `CScrollView` dispone di codice incorporato di caso speciale per il supporto di OLE 2.  Quindi, se è possibile utilizzare queste classi nell'applicazione trarrete vantaggio per l'impegno inserito nei rispettivi per notificare loro OLE.  Nuovamente, è possibile "a" rotolo\-vostro\- proprie classi qui per tali scopi, ma non è consigliato.  Se è necessario implementare funzionalità simili, il codice sorgente di MFC è un riferimento super per gestire alcuni punti più precisi OLE \(soprattutto quando si tratta di attivazione sul posto\).  
  
## Esaminare il codice di esempio MFC  
 Esistono diversi esempi di MFC che includono funzionalità OLE.  Ognuna di queste applicazioni implementa OLE da un angolo diverso:  
  
-   [HIERSVR](../top/visual-cpp-samples.md) è utile principalmente da utilizzare come applicazione server.  È inclusa in MFC 2,0 come applicazione MFC\/OLE1 ed è stata trasferita a MFC\/OLE 2 e si ha esteso in modo che implementa numerose funzionalità OLE disponibili in OLE 2.  
  
-   [OCLIENT](../top/visual-cpp-samples.md) questo è un'applicazione autonoma contenitore, progettata per illustrare diverse funzionalità OLE dal punto di vista del contenitore.  Anche se è stato trasferito da MFC 2,0 e quindi è stato esteso per supportare diverse funzionalità OLE più avanzate, ad esempio i formati degli Appunti personalizzati e collegamenti a elementi incorporati.  
  
-   [DRAWCLI](../top/visual-cpp-samples.md) questa applicazione implementa il supporto del contenitore OLE molto simile a OCLIENT affermativo, con l'eccezione che esegue questa operazione nel contesto di un programma di disegno orientata a oggetti esistente.  Viene illustrato come implementare il supporto del contenitore OLE e integrarlo nelle applicazioni esistenti.  
  
-   [In SUPERPAD](../top/visual-cpp-samples.md) questa applicazione nonché è un'applicazione autonoma express, è anche un server OLE.  Il supporto che implementa server è sufficiente minimalista.  Di particolare interesse è la modalità di utilizzo dei servizi degli Appunti OLE per copiare i dati negli Appunti, ma utilizza le funzionalità disponibili nel controllo di "modifica" windows per implementare la funzionalità dell'inserimento degli Appunti.  Viene mostrata una combinazione interessante di utilizzo tradizionale nonché di integrazione di API Windows con nuovi API OLE.  
  
 Per ulteriori informazioni sulle applicazioni di esempio, vedere la guida dell'esempio MFC".  
  
## Study case: OCLIENT da MFC 2,0  
 Come descritto in precedenza, [OCLIENT](../top/visual-cpp-samples.md) è stato incluso in MFC 2,0 e ha implementato con OLE MFC\/OLE1.  I passaggi da cui l'applicazione inizialmente è stata convertita utilizzare le classi di MFC\/OLE 2 vengono descritti di seguito.  Numerose funzionalità sono stati aggiunti dopo la porta iniziale è stata completata per illustrare le classi di MFC\/OLE.  Queste funzionalità non saranno trattate in questo argomento; fare riferimento all'esempio stesso per ulteriori informazioni su tali funzionalità avanzate.  
  
> [!NOTE]
>  Gli errori del compilatore e il processo dettagliato vengono creati con Visual C\+\+ 2.0.  I messaggi di errore specifici e i percorsi possono modificare con Visual C\+\+ 4,0, ma le informazioni concettuali rimangano valide.  
  
## In ottenendola servizio  
 Tale approccio adottato per trasferire l'esempio OCLIENT a MFC\/OLE è cominciare compilandola e correzione di errori del compilatore che risulteranno utili.  Se prelevate l'esempio OCLIENT da MFC 2,0 e compilarlo in questa versione di MFC, si noterà che non esiste che molti errori da risolvere.  Errori nell'ordine in cui si sono verificati vengono descritti di seguito.  
  
## Compilare e correggere gli errori  
  
```  
\oclient\mainview.cpp(104) : error C2660: 'Draw' : function does not take 4 parameters  
```  
  
 Il primo errore influisce su `COleClientItem::Draw`.  In MFC\/OLE1 ha richiesto più parametri che accetta la versione di MFC\/OLE.  Parametri aggiuntivi non sono spesso necessari e genere NULL \(come in questo esempio\).  Questa versione di MFC può determinare automaticamente i valori per i lpWBounds quando il CDC a cui sta tracciando è un controller di dominio del metafile.  Inoltre, il parametro del pFormatDC non è più necessario poiché il framework compilerà uno "dal controller di dominio di attributo" è pDC passato.  Pertanto per risolvere il problema, rimuovere semplicemente i due parametri aggiuntivi NULL alla chiamata di disegno.  
  
```  
\oclient\mainview.cpp(273) : error C2065: 'OLE_MAXNAMESIZE' : undeclared identifier  
\oclient\mainview.cpp(273) : error C2057: expected constant expression  
\oclient\mainview.cpp(280) : error C2664: 'CreateLinkFromClipboard' : cannot convert parameter 1 from 'char [1]' to 'enum ::tagOLERENDER '  
\oclient\mainview.cpp(286) : error C2664: 'CreateFromClipboard' : cannot convert parameter 1 from 'char [1]' to 'enum ::tagOLERENDER '  
\oclient\mainview.cpp(288) : error C2664: 'CreateStaticFromClipboard' : cannot convert parameter 1 from 'char [1]' to 'enum ::tagOLERENDER '  
```  
  
 Gli errori sul risultato dal fatto che tutto **COleClientItem::CreateXXXX** viene eseguito in MFC\/OLE1 era necessario che un nome univoco viene passato per rappresentare l'elemento.  Ciò è un requisito OLE sottostante API.  Questa operazione non è necessaria in MFC\/OLE 2 poiché OLE 2 non utilizza il DDE come meccanismo sottostante comunicazioni \(il nome è stato utilizzato nelle conversazioni di DDE\).  Per correggere questo problema, è possibile rimuovere la funzione di **CreateNewName** nonché i riferimenti a.  È facilmente accessibile a ciò che ciascun funzione di MFC\/OLE previsto semplicemente nella versione corrente posizionando il cursore sulla chiamata e premendo F1.  
  
 Un'altra area che differisce significativamente è gestione degli Appunti OLE 2.  Con OLE1, sono state utilizzate le finestre delle API degli Appunti che interagiscono con gli Appunti.  Tramite OLE 2 operazione viene eseguita con un meccanismo diverso.  Le API MFC\/OLE1 hanno presuppone che gli Appunti sono aperti prima di copiare oggetto di `COleClientItem` negli Appunti.  Questa operazione non è più necessaria e l'esecuzione di tutte le operazioni relative agli Appunti di MFC\/OLE non superato.  Durante la modifica del codice per rimuovere le dipendenze da **CreateNewName**, è necessario rimuovere anche il codice che consente di aprire e chiudere gli Appunti di windows.  
  
```  
\oclient\mainview.cpp(332) : error C2065: 'AfxOleInsertDialog' : undeclared identifier  
\oclient\mainview.cpp(332) : error C2064: term does not evaluate to a function  
\oclient\mainview.cpp(344) : error C2057: expected constant expression  
\oclient\mainview.cpp(347) : error C2039: 'CreateNewObject' : is not a member of 'CRectItem'  
```  
  
 Risultato di questi errori dal gestore di **CMainView::OnInsertObject**.  Gestire "il comando nuovo oggetto inserisci" è un'altra area dove le operazioni di modifica di un bit.  In questo caso, è più facile unire semplicemente l'implementazione originale con quelle fornite da AppWizard per una nuova applicazione contenitore OLE.  Infatti, si tratta di una tecnica che è possibile applicare a trasportare altre applicazioni.  In MFC\/OLE1, viene visualizzato "la finestra di dialogo insert new object" chiamando la funzione di **AfxOleInsertDialog**.  In questa versione si costruisce un oggetto finestra di dialogo **COleInsertObject** e chiamate `DoModal`.  Inoltre, i nuovi elementi OLE vengono creati con **CLSID** anziché una stringa di classname.  Il risultato finale dovrebbe risultare simile al seguente  
  
```  
COleInsertDialog dlg;  
if (dlg.DoModal() != IDOK)  
    return;  
  
BeginWaitCursor();  
  
CRectItem* pItem = NULL;  
TRY  
{  
    // First create the C++ object  
    pItem = GetDocument()->CreateItem();  
    ASSERT_VALID(pItem);  
  
    // Initialize the item from the dialog data.  
    if (!dlg.CreateItem(pItem))  
        AfxThrowMemoryException();  
           // any exception will do  
    ASSERT_VALID(pItem);  
  
    // run the object if appropriate  
    if (dlg.GetSelectionType() ==   
            COleInsertDialog::createNewItem)  
        pItem->DoVerb(OLEIVERB_SHOW, this);  
  
    // update right away  
    pItem->UpdateLink();  
    pItem->UpdateItemRectFromServer();  
  
    // set selection to newly inserted item  
    SetSelection(pItem);  
    pItem->Invalidate();  
}  
CATCH (CException, e)  
{    
    // clean up item  
    if (pItem != NULL)  
        GetDocument()->DeleteItem(pItem);  
  
    AfxMessageBox(IDP_FAILED_TO_CREATE);  
}  
END_CATCH  
  
EndWaitCursor();  
```  
  
> [!NOTE]
>  Il nuovo oggetto inserisci può essere diverso per l'applicazione\):  
  
 È inoltre necessario includere \<afxodlgs.h, che\>contiene la dichiarazione della classe della finestra di dialogo **COleInsertObject** nonché le altre finestre di dialogo standard fornite da MFC.  
  
```  
\oclient\mainview.cpp(367) : error C2065: 'OLEVERB_PRIMARY' : undeclared identifier  
\oclient\mainview.cpp(367) : error C2660: 'DoVerb' : function does not take 1 parameters  
```  
  
 Questi errori sono causati dal fatto che qualsiasi OLE1 costanti sono stati modificati in OLE 2, anche se il concetto sono uguali.  In questo caso **OLEVERB\_PRIMARY** ha modificato in `OLEIVERB_PRIMARY`.  Sia in OLE1 che in OLE 2, il verbo primario in genere viene eseguito da un contenitore quando l'utente fa doppio clic su un elemento.  
  
 Inoltre, `DoVerb` ora accetta un parametro aggiuntivo \- un puntatore a una visualizzazione`CView`\(\*\).  Questo parametro viene utilizzato solo per implementare "modifica visiva" \(o l'attivazione sul posto\).  Per ora impostare tale parametro SU NULL, poiché non si implementa questa funzionalità attualmente.  
  
 Per assicurarsi che il framework non venga mai sul posto attivi, è necessario eseguire l'override di `COleClientItem::CanActivate` come segue:  
  
```  
BOOL CRectItem::CanActivate()  
{  
    return FALSE;  
}  
  
\oclient\rectitem.cpp(53) : error C2065: 'GetBounds' : undeclared identifier  
\oclient\rectitem.cpp(53) : error C2064: term does not evaluate to a function  
\oclient\rectitem.cpp(84) : error C2065: 'SetBounds' : undeclared identifier  
\oclient\rectitem.cpp(84) : error C2064: term does not evaluate to a function  
```  
  
 In MFC\/OLE1, **COleClientItem::GetBounds** e **SetBounds** sono stati utilizzati per eseguire una query e modificare l'ambito di un elemento \(i membri di **top** e di **left** è sempre zero\).  In MFC\/OLE 2 questo modo più diretto è supportato da `COleClientItem::GetExtent` e da `SetExtent`, che si occupano di **DIMENSIONI** o di `CSize` invece.  
  
 Il codice per il nuovo SetItemRectToServer e UpdateItemRectFromServer chiama il seguente tipo:  
  
```  
BOOL CRectItem::UpdateItemRectFromServer()  
{  
   ASSERT(m_bTrackServerSize);  
   CSize size;  
   if (!GetExtent(&size))  
      return FALSE;    // blank  
  
   // map from HIMETRIC to screen coordinates  
   {  
      CClientDC screenDC(NULL);  
      screenDC.SetMapMode(MM_HIMETRIC);  
      screenDC.LPtoDP(&size);  
   }  
   // just set the item size  
   if (m_rect.Size() != size)  
   {  
      // invalidate the old size/position  
      Invalidate();  
      m_rect.right = m_rect.left + size.cx;  
      m_rect.bottom = m_rect.top + size.cy;  
      // as well as the new size/position  
      Invalidate();  
   }  
   return TRUE;  
}  
  
BOOL CRectItem::SetItemRectToServer()  
{  
   // set the official bounds for the embedded item  
   CSize size = m_rect.Size();  
   {  
      CClientDC screenDC(NULL);  
      screenDC.SetMapMode(MM_HIMETRIC);  
      screenDC.DPtoLP(&size);  
   }  
   TRY  
   {  
      SetExtent(size);  // may do a wait  
   }  
   CATCH(CException, e)  
   {  
      return FALSE;  // links will not allow SetBounds  
   }  
   END_CATCH  
   return TRUE;  
}  
  
\oclient\frame.cpp(50) : error C2039: 'InWaitForRelease' : is not a member of 'COleClientItem'  
\oclient\frame.cpp(50) : error C2065: 'InWaitForRelease' : undeclared identifier  
\oclient\frame.cpp(50) : error C2064: term does not evaluate to a function  
```  
  
 Nelle chiamate sincrone di MFC\/OLE1 l'api da un contenitore a un server *sono stati simulati*, poiché OLE1 è intrinsecamente asincrono in molti casi.  È necessario verificare una chiamata asincrona costante in corso prima di elaborare i controlli dall'utente.  MFC\/OLE1 è fornita la funzione di **COleClientItem::InWaitForRelease** per farlo.  In MFC\/OLE 2 questo comportamento non è necessario, pertanto è possibile rimuovere raccolta override di OnCommand in CMainFrame tutte.  
  
 In questa fase OCLIENT verranno compilati e viene collegato.  
  
## Altre modifiche necessarie  
 Esistono poche operazioni che non vengono apportate terrà OCLIENT l'esecuzione, tuttavia.  È consigliabile correggere questi problemi anziché in un secondo momento.  
  
 Innanzitutto, è necessario inizializzare le librerie OLE.  Questa operazione viene eseguita chiamando **AfxOleInit** da `InitInstance`:  
  
```  
if (!AfxOleInit())  
{  
  AfxMessageBox("Failed to initialize OLE libraries");  
  return FALSE;  
}  
```  
  
 È inoltre consigliabile verificare le funzioni virtuali per le modifiche dell'elenco di parametri.  Una tale funzione è `COleClientItem::OnChange`, eseguire l'override di ogni applicazione contenitore di MFC\/OLE.  Esaminando la Guida online, si noterà che un vedere "dwParam DWORD" venga aggiunto.  Il nuovo CRectItem::OnChange ha l'aspetto seguente:  
  
```  
void   
CRectItem::OnChange(OLE_NOTIFICATION wNotification, DWORD dwParam)  
{  
  if (m_bTrackServerSize &&  
        !UpdateItemRectFromServer())  
  {  
    // Blank object  
    if (wNotification == OLE_CLOSED)  
    {  
      // no data received for the object - destroy it  
      ASSERT(!IsVisible());  
      GetDocument()->DeleteItem(this);  
      return;   // no update (item is gone now)  
    }  
  }  
  if (wNotification != OLE_CLOSED)  
      Dirty();  
  Invalidate();  // any change will cause a redraw  
}  
```  
  
 In MFC\/OLE1, applicazioni contenitori deriva una classe del documento da **COleClientDoc**.  In MFC\/OLE 2 questa classe è stata rimossa e stato sostituito da `COleDocument` \(questa nuova società semplifica lo sviluppo di applicazioni contenitore\/server\).  È `#define` che esegue il mapping **COleClientDoc** a `COleDocument` per semplificare il porting delle applicazioni MFC\/OLE1 a MFC\/OLE 2, ad esempio OCLIENT.  Una delle funzionalità non fornite da `COleDocument` fornita da **COleClientDoc** è le voci della mappa standard del messaggio di comando.  Questa operazione viene eseguita in modo che le applicazioni server, che utilizzano anche `COleDocument` \(indirettamente\), non portino relativi al sovraccarico di questi gestori comandi a meno che non siano un'applicazione contenitore\/server.  È necessario aggiungere le voci seguenti nella mappa messaggi di CMainDoc:  
  
```  
ON_UPDATE_COMMAND_UI(ID_EDIT_PASTE, OnUpdatePasteMenu)  
ON_UPDATE_COMMAND_UI(ID_EDIT_PASTE_LINK, OnUpdatePasteLinkMenu)  
ON_UPDATE_COMMAND_UI(ID_OLE_EDIT_LINKS, OnUpdateEditLinksMenu)  
ON_COMMAND(ID_OLE_EDIT_LINKS, COleDocument::OnEditLinks)  
ON_UPDATE_COMMAND_UI(ID_OLE_VERB_FIRST, OnUpdateObjectVerbMenu)  
ON_UPDATE_COMMAND_UI(ID_OLE_EDIT_CONVERT, OnUpdateObjectVerbMenu)  
ON_COMMAND(ID_OLE_EDIT_CONVERT, OnEditConvert)  
```  
  
 L'implementazione di tutti questi controlli è in `COleDocument`, che vengano la classe di base per il documento.  
  
 In questa fase, OCLIENT è un'applicazione funzionale del contenitore OLE.  È possibile inserire gli elementi di qualsiasi tipo \(OLE1 o OLE 2\).  Poiché il codice necessario per abilitare l'attivazione sul posto non viene implementato, gli elementi vengono modificati in una finestra separata a ciò che avviene con OLE1.  La sezione successiva vengono illustrate le modifiche necessarie per attivare la modifica sul posto \(talvolta denominata "modifica visiva"\).  
  
## Aggiunta di "modifica visiva"  
 Una delle funzionalità più interessanti di OLE è l'attivazione sul posto \(o "modifica visiva"\).  Questa funzionalità consente l'applicazione server debba subentrare in parti dell'interfaccia utente del contenitore fornisce un'interfaccia più fine di modifica per l'utente.  Per implementare l'attivazione sul posto a OCLIENT, alcune risorse speciali devono essere aggiunti nonché il codice aggiuntivo.  Queste risorse e il codice vengono generalmente forniti da AppWizard \- infatti, molto del codice precedente è stato creato in prestito direttamente da un'applicazione aggiornata di AppWizard con il supporto del contenitore "".  
  
 Innanzitutto, è necessario aggiungere una risorsa da utilizzare quando è presente un elemento che è attivo sul posto.  È possibile creare questa risorsa menu aggiuntive in Visual C\+\+ copiando la risorsa di IDR\_OCLITYPE e rimuovendo tutto tranne nel file e nella finestra popup.  Due barre di separazione sono inserite tra il file e la finestra popup per indicare la separazione di gruppi \(dovrebbe apparire il seguente: File &#124; &#124; Finestra.  Per ulteriori informazioni sul supporto dei separatori e come i menu del contenitore e il server vengono uniti vedere "i menu e a risorse: Unione di menu" *in OLE 2 classi*.  
  
 Dopo aver questi creare menu, è necessario lasciare il framework si conoscono essi.  Questa operazione viene eseguita chiamando `CDocTemplate::SetContainerInfo` per il modello di documento prima di aggiungere all'elenco di modelli di documento nel InitInstance.  Il nuovo codice per registrare gli aspetti del modello di documento è analogo al seguente:  
  
```  
CDocTemplate* pTemplate = new CMultiDocTemplate(  
    IDR_OLECLITYPE,  
    RUNTIME_CLASS(CMainDoc),  
    RUNTIME_CLASS(CMDIChildWnd),    // standard MDI child frame  
    RUNTIME_CLASS(CMainView));  
pTemplate->SetContainerInfo(IDR_OLECLITYPE_INPLACE);  
AddDocTemplate(pTemplate);  
```  
  
 La risorsa di IDR\_OLECLITYPE\_INPLACE rappresenta la risorsa sul posto speciale creata in Visual C\+\+.  
  
 Per abilitare l'attivazione sul posto, esistono alcune operazioni che devono essere modificati sia nella classe derivata di `CView` \(CMainView\) e nella classe derivata di `COleClientItem` \(CRectItem\).  Tutte queste override sono fornite da AppWizard e la maggior parte dell'implementazione avranno direttamente da un'applicazione predefinita di AppWizard.  
  
 Il primo passaggio di questa porta, l'attivazione sul posto è stata disabilitata interamente eseguire l'override `COleClientItem::CanActivate`.  Questo override devono essere rimosse per consentire l'attivazione sul posto.  Inoltre, NULL è stato passato a tutte le chiamate a `DoVerb` \(esistono due delle quali\) per fornire la visualizzazione è necessaria solo per l'attivazione sul posto.  Per implementare completamente l'attivazione sul posto, è necessario passare la visualizzazione corretta nella chiamata di `DoVerb`.  Una di queste chiamate è in **CMainView::OnInsertObject**:  
  
```  
pItem->DoVerb(OLEIVERB_SHOW, this);  
```  
  
 Un altro è in **CMainView::OnLButtonDblClk**:  
  
```  
m_pSelection->DoVerb(OLEIVERB_PRIMARY, this);  
```  
  
 È necessario eseguire l'override di `COleClientItem::OnGetItemPosition`.  Ciò indica al server in cui inserire la finestra rispetto alla finestra contenitore quando l'elemento viene attivato sul posto.  Per OCLIENT, l'implementazione è semplice:  
  
```  
void CRectItem::OnGetItemPosition(CRect& rPosition)  
{  
    rPosition = m_rect;  
}  
```  
  
 La maggior parte dei server implementano ciò che viene chiamato "ridimensionamento sul posto". In questo modo la finestra server da ridimensionare e spostare mentre l'utente sta modificando l'elemento.  Il contenitore devono partecipare a questa azione, lo spostamento o da ridimensionare la finestra in genere impatto sulla posizione e le dimensioni nel documento contenitore stessa.  L'implementazione di OCLIENT sincronizza il rettangolo interno gestito da m\_rect con la nuova posizione e le dimensioni.  
  
```  
BOOL CRectItem::OnChangeItemPosition(const CRect& rectPos)  
{  
    ASSERT_VALID(this);  
  
    if (!COleClientItem::OnChangeItemPosition(rectPos))  
        return FALSE;  
  
    Invalidate();  
    m_rect = rectPos;  
    Invalidate();  
    GetDocument()->SetModifiedFlag();  
  
    return TRUE;  
}  
```  
  
 A questo punto, è sufficiente codice per consentire un elemento in uso sul posto e si occupi di ridimensionamento e di spostare l'elemento quando è attivo, ma nessun codice consentire all'utente di chiudere la sessione di modifica.  Sebbene alcuni server forniscono questa funzionalità stessi mantenendo il tasto escape, è consigliato ai contenitori forniscono due modalità per disattivare un elemento: \(1\) fa clic all'esterno dell'elemento e \(2\) premendo escape.  
  
 Per il tasto escape, aggiungere un tasto di scelta rapida in Visual C\+\+ che esegue il mapping della chiave VK\_ESCAPE a un comando, ID\_CANCEL\_EDIT viene aggiunto alle risorse.  Il gestore per questo comando seguente:  
  
```  
// The following command handler provides the standard  
// keyboard user interface to cancel an in-place  
// editing session.void CMainView::OnCancelEdit()  
{  
    // Close any in-place active item on this view.  
    COleClientItem* pActiveItem =   
        GetDocument()->GetInPlaceActiveItem(this);  
    if (pActiveItem != NULL)  
        pActiveItem->Close();  
    ASSERT(GetDocument()->GetInPlaceActiveItem(this) == NULL);  
}  
```  
  
 Per gestire il caso in cui l'utente fa clic all'esterno dell'elemento, aggiungere il codice seguente all'inizio di **CMainView::SetSelection**:  
  
```  
if (pNewSel != m_pSelection || pNewSel == NULL)  
{  
    COleClientItem* pActiveItem =   
        GetDocument()->GetInPlaceActiveItem(this);  
    if (pActiveItem != NULL && pActiveItem != pNewSel)  
        pActiveItem->Close();  
}  
  
```  
  
 Quando un elemento viene attivo sul posto, deve avere lo stato attivo.  Per garantire questo caso la gestione OnSetFocus in modo da fornire sempre lo stato attivo sull'elemento attivo quando il punto di vista riceve lo stato attivo:  
  
```  
// Special handling of OnSetFocus and OnSize are required   
// when an object is being edited in-place.  
void CMainView::OnSetFocus(CWnd* pOldWnd)  
{  
    COleClientItem* pActiveItem =   
        GetDocument()->GetInPlaceActiveItem(this);  
    if (pActiveItem != NULL &&  
    pActiveItem->GetItemState() == COleClientItem::activeUIState)  
    {  
        // need to set focus to this item if it is same view  
        CWnd* pWnd = pActiveItem->GetInPlaceWindow();  
        if (pWnd != NULL)  
        {  
            pWnd->SetFocus();  // don't call the base class  
            return;  
        }  
    }  
  
    CView::OnSetFocus(pOldWnd);  
}  
```  
  
 Quando la finestra viene ridimensionata, è necessario notificare all'elemento attivo che il rettangolo di ridimensionamento è stato modificato.  A tale scopo si fornisce un gestore per `OnSize`:  
  
```  
void CMainView::OnSize(UINT nType, int cx, int cy)  
{  
    CView::OnSize(nType, cx, cy);  
    COleClientItem* pActiveItem =   
        GetDocument()->GetInPlaceActiveItem(this);  
    if (pActiveItem != NULL)  
        pActiveItem->SetItemRects();  
}  
```  
  
## Study case: HIERSVR da MFC 2,0  
 [HIERSVR](../top/visual-cpp-samples.md) inoltre è stato incluso in MFC 2,0 e ha implementato con OLE MFC\/OLE1.  Questa nota descritti brevemente i passaggi da cui l'applicazione inizialmente è stata convertita utilizzare le classi di MFC\/OLE 2.  Numerose funzionalità sono stati aggiunti dopo la porta iniziale è stata completata per illustrare le classi di MFC\/OLE 2.  Queste funzionalità non saranno trattate in questo argomento; fare riferimento all'esempio stesso per ulteriori informazioni su tali funzionalità avanzate.  
  
> [!NOTE]
>  Gli errori del compilatore e il processo dettagliato vengono creati con Visual C\+\+ 2.0.  I messaggi di errore specifici e i percorsi possono modificare con Visual C\+\+ 4,0, ma le informazioni concettuali rimangano valide.  
  
## In ottenendola servizio  
 Tale approccio adottato per trasferire l'esempio HIERSVR a MFC\/OLE è cominciare compilandola e correzione di errori del compilatore che risulteranno utili.  Se prelevate l'esempio HIERSVR da MFC 2,0 e compilarlo in questa versione di MFC, si noterà che non sono molti errori vengano risolti sebbene vi siano più di con l'esempio OCLIENT\).  Errori nell'ordine in cui si verificano in genere vengono descritti di seguito.  
  
## Compilare e correggere gli errori  
  
```  
\hiersvr\hiersvr.cpp(83) : error C2039: 'RunEmbedded' : is not a member of 'COleTemplateServer'  
```  
  
 Nel primo errore indica un problema più grande con la funzione di `InitInstance` per i server.  Inizializzazioni richieste per un server OLE è probabilmente una di dimensioni maggiori modifiche da compiere all'applicazione MFC\/OLE1 ottenerla in esecuzione.  Il modo migliore da eseguire è di esaminare cui AppWizard crea per un server OLE e modificare il codice in base alle proprie esigenze.  Di seguito sono riportati alcuni punti ricordare:  
  
 È necessario inizializzare le librerie OLE chiamando **AfxOleInit**  
  
 Chiamata SetServerInfo sull'oggetto modello di documento all'handle della risorsa server impostate e alle informazioni sulla classe di runtime che non è possibile impostare con il costruttore di `CDocTemplate`.  
  
 Non mostrare la finestra principale dell'applicazione se \/Embedding è presente nella riga di comando.  
  
 È necessario disporre di **GUID** per il documento.  Si tratta di un identificatore univoco per il tipo di documento \(128 bit\).  AppWizard creerà uno automaticamente \- se si utilizza la tecnica descritta di copia del nuovo codice da una nuova applicazione server generata AppWizard, è possibile "impossessarsi semplicemente" il GUID dall'applicazione.  In caso contrario, è possibile utilizzare l'utilità di GUIDGEN.EXE della directory BIN.  
  
 È necessario "server" all'oggetto di `COleTemplateServer` al modello di documento chiamando `COleTemplateServer::ConnectTemplate`.  
  
 Aggiornare il Registro di sistema quando l'applicazione viene eseguito autonomamente.  In questo modo, se l'utente rimuove il PROGETTO per l'applicazione, eseguendo la dalla nuova posizione aggiornerà il database di registrazione di sistema di Windows per indicare la nuova posizione.  
  
 Dopo avere applicato tutte queste modifiche basate su cui AppWizard crea per `InitInstance`, `InitInstance` \(GUID e correlato\) per HIERSVR è indicato di seguito:  
  
```  
// this is the GUID for HIERSVR documents  
static const GUID BASED_CODE clsid =  
    { 0xA0A16360L, 0xC19B, 0x101A, { 0x8C, 0xE5, 0x00, 0xDD, 0x01, 0x11, 0x3F, 0x12 } };  
  
/////////////////////////////////////////////////////////////////////////////  
// COLEServerApp initialization  
  
BOOL COLEServerApp::InitInstance()  
{  
    // OLE 2 initialization  
    if (!AfxOleInit())  
    {  
        AfxMessageBox("Initialization of the OLE failed!");  
        return FALSE;  
    }  
  
    // Standard initialization  
    LoadStdProfileSettings(); // Load standard INI file options   
  
    // Register document templates  
    CDocTemplate* pDocTemplate;  
    pDocTemplate = new CMultiDocTemplate(IDR_HIERSVRTYPE,  
        RUNTIME_CLASS(CServerDoc),     
        RUNTIME_CLASS(CMDIChildWnd),  
        RUNTIME_CLASS(CServerView));  
    pDocTemplate->SetServerInfo(IDR_HIERSVRTYPE_SRVR_EMB);  
    AddDocTemplate(pDocTemplate);  
  
    // create main MDI Frame window  
    CMainFrame* pMainFrame = new CMainFrame;  
    if (!pMainFrame->LoadFrame(IDR_MAINFRAME))  
        return FALSE;  
    m_pMainWnd = pMainFrame;  
  
    SetDialogBkColor();   // gray look  
  
    // enable file manager drag/drop and DDE Execute open  
    m_pMainWnd->DragAcceptFiles();  
    EnableShellOpen();  
  
    m_server.ConnectTemplate(clsid, pDocTemplate, FALSE);  
    COleTemplateServer::RegisterAll();  
  
    // try to launch as an OLE server  
    if (RunEmbedded())  
    {  
        // "short-circuit" initialization -- run as server!  
        return TRUE;  
    }  
    m_server.UpdateRegistry();  
    RegisterShellFileTypes();  
  
    // not run as OLE server, so show the main window  
    if (m_lpCmdLine[0] == '\0')  
    {  
        // create a new (empty) document  
        OnFileNew();  
    }  
    else  
    {  
        // open an existing document  
        OpenDocumentFile(m_lpCmdLine);  
    }  
  
    pMainFrame->ShowWindow(m_nCmdShow);  
    pMainFrame->UpdateWindow();  
  
    return TRUE;  
}  
```  
  
 Si noterà che il codice precedente si riferisce a un nuovo ID di risorsa, IDR\_HIERSVRTYPE\_SRVR\_EMB.  Si tratta della risorsa menu da utilizzare quando un documento incorporato in un altro contenitore viene modificato.  In MFC\/OLE1 voci di menu specifiche per modificare un elemento incorporato sono immediatamente modificato.  Mediante un menu completamente diverso struttura quando modificare un elemento incorporato anziché modificare un documento basato su file semplifica notevolmente fornire interfacce utente diverse per queste due modalità distinte.  Come verrà illustrato in seguito, una risorsa menu interamente separata viene utilizzata quando si modifica un oggetto incorporato sul posto.  
  
 Per creare questa risorsa, caricare lo script di risorsa in Visual C\+\+ e copiare la risorsa menu esistente di IDR\_HIERSVRTYPE.  Rinominare la nuova risorsa a IDR\_HIERSVRTYPE\_SRVR\_EMB \(si tratta della stessa convenzione di denominazione che utilizzi di AppWizard\).  "Salvataggio del file" modifica "seguenti all'aggiornamento del file"; assegnargli l'id di comando **ID\_FILE\_UPDATE**.  Modificare anche "salva il file come" class la copia di salvataggio come"; assegnargli l'id di comando **ID\_FILE\_SAVE\_COPY\_AS**.  Il framework fornisce l'implementazione di entrambi controlli.  
  
```  
\hiersvr\svritem.h(60) : error C2433: 'OLESTATUS' : 'virtual' not permitted on data declarations  
\hiersvr\svritem.h(60) : error C2501: 'OLESTATUS' : missing decl-specifiers  
\hiersvr\svritem.h(60) : error C2146: syntax error : missing ';' before identifier 'OnSetData'  
\hiersvr\svritem.h(60) : error C2061: syntax error : identifier 'OLECLIPFORMAT'  
\hiersvr\svritem.h(60) : error C2501: 'OnSetData' : missing decl-specifiers  
```  
  
 Esistono numerosi errori derivazione da un override di `OnSetData`, poiché sono riferiti al tipo di **OLESTATUS**.  **OLESTATUS** era gli errori restituiti OLE1 la modalità veloce.  Ciò ha modificato in `HRESULT` in OLE 2, sebbene MFC in genere convertisse `HRESULT` in `COleException` che contiene l'errore.  In questo particolare caso, l'override di `OnSetData` non sono più necessarie, pertanto la soluzione più semplice consiste di rimuoverlo.  
  
```  
\hiersvr\svritem.cpp(30) : error C2660: 'COleServerItem::COleServerItem' : function does not take 1 parameters  
```  
  
 Il costruttore di `COleServerItem` accetta un parametro supplementare "di BOOL".  Questo flag determina quali la gestione della memoria viene eseguita sugli oggetti di `COleServerItem`.  Impostandolo SU TRUE, il framework gestisce la gestione della memoria di questi oggetti \- eliminarli quando non sono più necessari.  HIERSVR utilizza oggetti di **CServerItem** \(derivato da `COleServerItem`\) come parte dei dati nativi, pertanto questo flag impostato su FALSE.  In questo modo HIERSVR determinare se ogni elemento server viene eliminato.  
  
```  
\hiersvr\svritem.cpp(44) : error C2259: 'CServerItem' : illegal attempt to instantiate abstract class  
\hiersvr\svritem.cpp(44) : error C2259: 'CServerItem' : illegal attempt to instantiate abstract class  
```  
  
 Poiché questi errori stessi, esistono alcune funzioni virtuali pure "" che non sono state sottoposte in CServerItem.  In genere è causato dal fatto che l'elenco di parametri di OnDraw è stato modificato.  Per correggere questo errore, **CServerItem::OnDraw** di modifica come seguente \(nonché la dichiarazione in svritem.h\):  
  
```  
BOOL CServerItem::OnDraw(CDC* pDC, CSize& rSize)  
{  
    // request from OLE to draw node  
    pDC->SetMapMode(MM_TEXT); // always in pixels  
    return DoDraw(pDC, CPoint(0,0), FALSE);  
}  
```  
  
 Il nuovo parametro è "rSize".  Ciò consente di compilare le dimensioni di disegno, se appropriato.  Questa dimensione deve essere in **HIMETRIC**.  In questo caso, non è pratico per riempire questo valore, il framework chiama `OnGetExtent` per recuperare l'ambito.  Per quello corretto, sarà necessario implementare `OnGetExtent`:  
  
```  
BOOL CServerItem::OnGetExtent(DVASPECT dwDrawAspect, CSize& rSize)  
{  
    if (dwDrawAspect != DVASPECT_CONTENT)  
        return COleServerItem::OnGetExtent(dwDrawAspect, rSize);  
  
    rSize = CalcNodeSize();  
    return TRUE;  
}  
  
\hiersvr\svritem.cpp(104) : error C2065: 'm_rectBounds' : undeclared identifier  
\hiersvr\svritem.cpp(104) : error C2228: left of '.SetRect' must have class/struct/union type  
\hiersvr\svritem.cpp(106) : error C2664: 'void __pascal __far DPtoLP(struct ::tagPOINT __far *,int )__far const ' : cannot convert parameter 1 from 'int __far *' to 'struct ::tagPOINT __far *'  
```  
  
 Nella funzione di CServerItem::CalcNodeSize la dimensione elemento viene convertita in **HIMETRIC** e memorizzata in **m\_rectBounds**.  Il membro non documentato di '**m\_rectBounds**' di `COleServerItem` non esiste \(parzialmente è stata sostituita da `m_sizeExtent`, ma in OLE 2 il membro prevede l'utilizzo leggermente diversa rispetto **m\_rectBounds** apportate in OLE1\).  Anziché impostare la dimensione di **HIMETRIC** in questa variabile membro, la restituirete.  Questo valore restituito viene utilizzato in `OnGetExtent`, implementato in precedenza.  
  
```  
CSize CServerItem::CalcNodeSize()  
{  
    CClientDC dcScreen(NULL);  
  
    m_sizeNode = dcScreen.GetTextExtent(m_strDescription,  
      m_strDescription.GetLength());  
    m_sizeNode += CSize(CX_INSET * 2, CY_INSET * 2);  
  
    // set suggested HIMETRIC size  
    CSize size(m_sizeNode.cx, m_sizeNode.cy);  
    dcScreen.SetMapMode(MM_HIMETRIC);  
    dcScreen.DPtoLP(&size);  
    return size;  
}  
```  
  
 CServerItem esegue l'override di **COleServerItem::OnGetTextData**.  Questa funzione è obsoleta in MFC\/OLE e viene sostituita da un meccanismo diverso.  La versione MFC 3,0 dell'esempio [HIERSVR](../top/visual-cpp-samples.md) OLE MFC implementa questa funzionalità eseguire l'override `COleServerItem::OnRenderFileData`.  Questa funzionalità non è importante per la porta di base, pertanto è possibile rimuovere un override di OnGetTextData.  
  
 Esistono molti altri errori in svritem.cpp che non sono stati risolti.  Non presenti errori "reali" \- appena errori causati da errori precedenti.  
  
```  
\hiersvr\svrview.cpp(325) : error C2660: 'CopyToClipboard' : function does not take 2 parameters  
```  
  
 `COleServerItem::CopyToClipboard` non supporta più il flag "bIncludeNative".  I dati nativi \(i dati scritti dall'elemento server serializzano la funzione\) vengono copiati sempre, pertanto si rimuove il primo parametro.  Inoltre, `CopyToClipboard` genererà un'eccezione quando si verifica un errore anziché restituire FALSE.  Modificare il codice per CServerView::OnEditCopy come segue:  
  
```  
void CServerView::OnEditCopy()  
{  
    if (m_pSelectedNode == NULL)  
        AfxThrowNotSupportedException();  
  
    TRY  
    {  
        m_pSelectedNode->CopyToClipboard(TRUE);  
    }  
    CATCH_ALL(e)  
    {  
        AfxMessageBox("Copy to clipboard failed");  
    }  
    END_CATCH_ALL     
}  
```  
  
 Anche se sono disponibili più errori derivandole dalla compilazione di rilascio MFC 2,0 HIERSVR che si è verificato per la stessa versione di OCLIENT, vi sono effettivamente meno modifiche.  
  
 In questa fase HIERSVR compilati e viene collegato e funzionerà come server OLE, ma senza alcuna funzionalità di modifica sul posto, che verrà implementata avanti.  
  
## Aggiunta di "modifica visiva"  
 Per aggiungere "modifica visiva" \(o l'attivazione sul posto\) all'applicazione server, sono disponibili solo alcune operazioni che è necessario eseguire la gestione automatica di:  
  
-   È necessario una risorsa menu speciale essere utilizzato quando l'elemento è attivo sul posto.  
  
-   Questa applicazione è presente una barra degli strumenti, pertanto è necessario disporre di una barra degli strumenti con solo un sottoinsieme della barra degli strumenti normale per far corrispondere i comandi di menu disponibili nel server \(corrisponde alla risorsa menu indicate in precedenza\).  
  
-   È necessario disporre di una nuova classe derivata da `COleIPFrameWnd` che fornisce l'interfaccia utente sul posto \(molto simile a CMainFrame, derivato da `CMDIFrameWnd`, fornisce l'interfaccia utente MDI\).  
  
-   È necessario che il framework su queste risorse e classi speciali.  
  
 La risorsa menu è facile creare.  Eseguire Visual C\+\+, copiare la risorsa menu IDR\_HIERSVRTYPE a una risorsa menu chiamata IDR\_HIERSVRTYPE\_SRVR\_IP.  Modificare il menu in modo dai popup di menu? e vengono lasciati solo di modifica.  Aggiungere due separatori tra il menu modifica e menu? \(dovrebbe apparire il seguente: Modifica &#124; &#124; Guide\).  Per ulteriori informazioni sul supporto dei separatori e come i menu del contenitore e il server vengono uniti, vedere "i menu e le risorse: Unione di menu" *in OLE 2 classi*.  
  
 La bitmap per la barra degli strumenti del sottoinsieme può essere creata copiando quella da un'applicazione generata AppWizard aggiornata con un'opzione "server" selezionata.  Questa bitmap può quindi essere inclusa in Visual C\+\+.  Assicurarsi di assegnare alla bitmap un ID di IDR\_HIERSVRTYPE\_SRVR\_IP.  
  
 La classe derivata da `COleIPFrameWnd` può essere copiato da un'applicazione generata AppWizard con supporto server anche.  Copiare entrambi i file, IPFRAME.CPP e IPFRAME.H e aggiungerli al progetto.  Assicurarsi che la chiamata di `LoadBitmap` fa riferimento a IDR\_HIERSVRTYPE\_SRVR\_IP, la bitmap creata nel passaggio precedente.  
  
 Ora che tutte le nuove risorse e classi vengono create, aggiungere il codice necessario affinché il framework sia su questi \(e sa che questa applicazione supporta ora la modifica sul posto\).  Questa operazione viene eseguita l'aggiunta di un certopiù di parametri alla chiamata di `SetServerInfo` nella funzione di `InitInstance` :  
  
```  
pDocTemplate->SetServerInfo(IDR_HIERSVRTYPE_SRVR_EMB,  
    IDR_HIERSVRTYPE_SRVR_IP, RUNTIME_CLASS(CInPlaceFrame));  
```  
  
 Adesso è possibile eseguire sul posto nel contenitore che supporta inoltre l'attivazione sul posto.  Tuttavia, esiste un bug ancora secondario che si apposta nel codice.  HIERSVR supporta un menu di scelta rapida, viene visualizzato quando l'utente preme il pulsante destro del mouse.  Funzionamento del menu quando HIERSVR è completamente aperto, ma non funziona quando incorporare modifica sul posto.  Il motivo è possibile bloccare a questa singola riga di codice in CServerView::OnRButtonDown:  
  
```  
pMenu->TrackPopupMenu(TPM_CENTERALIGN | TPM_RIGHTBUTTON,  
    point.x, point.y, AfxGetApp()->m_pMainWnd);  
```  
  
 Si noti il riferimento a **AfxGetApp\(\)\-\>m\_pMainWnd**.  Quando il server è attivata sul posto, viene visualizzata una finestra principale e il m\_pMainWnd è impostato, ma in genere è invisibile.  Inoltre, questa finestra si riferisce alla *finestra principale* dell'applicazione, la finestra cornice MDI visualizzato quando il server è completamente aperto o esecuzione autonomo.  Non fa riferimento alla finestra cornice attiva \- che una volta sul posto attivato sia una finestra cornice derivata da `COleIPFrameWnd`.  Per ottenere la finestra attiva corretta anche quando la modifica sul posto, questa versione di MFC aggiunge una nuova funzione, `AfxGetMainWnd`.  In genere, è consigliabile utilizzare questa funzione anziché **AfxGetApp\(\)\-\>m\_pMainWnd**.  Questo codice deve essere modificato come segue:  
  
```  
pMenu->TrackPopupMenu(TPM_CENTERALIGN | TPM_RIGHTBUTTON,  
    point.x, point.y, AfxGetMainWnd());  
```  
  
 A questo punto si dispone di un server OLE come minimo abilitato per l'attivazione sul posto funzionale.  Esistono tuttavia ancora molte funzionalità disponibili con MFC\/OLE 2 che non erano disponibili in MFC\/OLE1.  Vedere l'esempio HIERSVR per ulteriori informazioni sulle funzionalità che è possibile implementare.  Alcune delle funzionalità che implementa HIERSVR vengono elencate di seguito:  
  
-   Eseguendo l'ingrandimento, per il vero comportamento di WYSISYG rispetto al contenitore.  
  
-   Trascinamento della selezione e un formato degli Appunti personalizzato.  
  
-   Scorrere la finestra contenitore quali la selezione viene modificato.  
  
 L'esempio HIERSVR in MFC 3,0 utilizza anche una progettazione leggermente diversa per gli elementi server.  Ciò contribuisce a ridurre l'utilizzo della memoria e rende i collegamenti più flessibili.  Con la versione 2,0 HIERSVR ogni nodo nella struttura ad albero`COleServerItem`*sottotipo*.  `COleServerItem` porta un certoun maggiore sovraccarico esclusivamente per ognuno di questi nodi, ma `COleServerItem` è obbligatoria per ogni collegamento attivo.  Ma in generale, esistono poche collegamenti attivi in un determinato momento.  A tale scopo più efficiente, il HIERSVR in questa versione di MFC separa il nodo da `COleServerItem`.  Dispone sia di un CServerNode che una classe di **CServerItem**.  **CServerItem** \(derivato da `COleServerItem`\) viene creato solo in base alle esigenze.  Dopo l'interruzione contenitore \(o del contenitore\) utilizzando tale particolare collegamento a tale nodo specifico, l'oggetto di CServerItem associato al CServerNode viene eliminato.  Questa progettazione è più efficiente e flessibile.  La flessibilità è disponibile in quando si gestiscono i collegamenti di selezione multipla.  In nessuna di queste due versioni della selezione multipla di supporto HIERSVR, ma sono molto più facili da aggiungere \(e collegamenti support a tali select\) con la versione MFC 3,0 HIERSVR, poiché `COleServerItem` è separato dai dati nativi.  
  
## Vedere anche  
 [Note tecniche per numero](../mfc/technical-notes-by-number.md)   
 [Note tecniche per categoria](../mfc/technical-notes-by-category.md)