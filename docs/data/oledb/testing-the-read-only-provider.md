---
title: "Test di un provider in sola lettura | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "provider OLE DB, chiamata"
  - "provider OLE DB, test"
  - "verifica provider"
  - "test, provider OLE DB"
ms.assetid: e4aa30c1-391b-41f8-ac73-5270e46fd712
caps.latest.revision: 8
caps.handback.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Test di un provider in sola lettura
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Per eseguire il test di un provider è necessario un consumer  che presenti, preferibilmente, funzionalità corrispondenti a quelle del provider.  I modelli consumer OLE DB sono wrapper di OLE DB e corrispondono agli oggetti COM del provider.  Dal momento che con i modelli consumer viene fornito anche il codice sorgente, è facile utilizzare tali modelli per effettuare il debug di un provider.  I modelli consumer hanno inoltre dimensioni estremamente ridotte e consentono di sviluppare velocemente applicazioni consumer.  
  
 Nell'esempio illustrato in questo argomento tramite la Creazione guidata applicazione MFC viene creata un'applicazione per un consumer di test.  L'applicazione di test è una semplice finestra di dialogo in cui viene aggiunto il codice del modello consumer OLE DB.  
  
### Per creare l'applicazione di test  
  
1.  Scegliere **Nuovo** dal menu **File**, quindi fare clic su **Progetto**.  
  
2.  Nel riquadro Tipi progetto selezionare la cartella **Progetti di Visual C\+\+**.  Nel riquadro Modelli fare clic su **Applicazione MFC**.  
  
3.  Come nome progetto immettere **TestProv** e scegliere **OK**.  
  
     Verrà visualizzata la Creazione guidata applicazione MFC.  
  
4.  Nella pagina **Tipo di applicazione** selezionare **Basato su finestra di dialogo**.  
  
5.  Nella pagina **Funzionalità avanzate** selezionare **Automazione** e fare clic su **Fine**.  
  
> [!NOTE]
>  L'applicazione non necessita del supporto dell'automazione se si aggiunge **CoInitialize** in **CTestProvApp::InitInstance**.  
  
 È possibile visualizzare e modificare la finestra di dialogo TestProv \(IDD\_TESTPROV\_DIALOG\) selezionandola in Visualizzazione risorse.  Aggiungere alla finestra di dialogo due caselle di riepilogo, una per ciascuna stringa del rowset.  Disattivare la proprietà sort per entrambe le caselle di riepilogo premendo ALT\+INVIO quando è selezionata una casella di riepilogo, quindi facendo clic sulla scheda **Stili** e deselezionando la casella di controllo **Ordina**.  Aggiungere inoltre un pulsante **Esegui** nella finestra di dialogo per recuperare il file.  La finestra di dialogo TestProv finale dovrà presentare due caselle di riepilogo denominate, rispettivamente, "String 1" e "String 2", nonché i pulsanti **OK**, **Annulla** ed **Esegui**.  
  
 Aprire il file di intestazione della classe della finestra di dialogo, in questo caso TestProvDlg.h.  Aggiungere il codice che segue al di fuori di eventuali dichiarazioni di classe:  
  
```  
////////////////////////////////////////////////////////////////////////  
// TestProvDlg.h  
  
class CProvider   
{  
// Attributes  
public:  
   char   szField1[16];  
   char   szField2[16];  
  
   // Binding Maps  
BEGIN_COLUMN_MAP(CProvider)  
   COLUMN_ENTRY(1, szField1)  
   COLUMN_ENTRY(2, szField2)  
END_COLUMN_MAP()  
};  
```  
  
 Il codice rappresenta un record utente che definisce le colonne che verranno inserite nel rowset.  Quando il client chiama **IAccessor::CreateAccessor**, vengono utilizzate queste voci per specificare le colonne da associare.  I modelli consumer OLE DB consentono inoltre di associare le colonne in modo dinamico.  Le macro COLUMN\_ENTRY rappresentano la versione del lato client delle macro PROVIDER\_COLUMN\_ENTRY.  Le due macro COLUMN\_ENTRY specificano l'ordinale, il tipo, la lunghezza e il membro dati delle due stringhe.  
  
 Aggiungere una funzione di gestione per il pulsante **Esegui** premendo CTRL e facendo doppio clic sul pulsante stesso.  Inserire il seguente codice nella funzione:  
  
```  
///////////////////////////////////////////////////////////////////////  
// TestProvDlg.cpp  
  
void CtestProvDlg::OnRun()  
{  
   CCommand<CAccessor<CProvider> > table;  
   CDataSource source;  
   CSession   session;  
  
   if (source.Open("MyProvider.MyProvider.1", NULL) != S_OK)  
      return;  
  
   if (session.Open(source) != S_OK)  
      return;  
  
   if (table.Open(session, _T("c:\\samples\\myprov\\myData.txt")) != S_OK)  
      return;  
  
   while (table.MoveNext() == S_OK)  
   {  
      m_ctlString1.AddString(table.szField1);  
      m_ctlString2.AddString(table.szField2);  
   }  
}  
```  
  
 Le classi `CCommand`, `CDataSource` e `CSession` appartengono tutte ai modelli consumer OLE DB.  Ogni classe corrisponde a un oggetto COM del provider.  L'oggetto `CCommand` accetta la classe `CProvider`, dichiarata nel file di intestazione, come parametro del modello.  Il parametro `CProvider` rappresenta le associazioni che verranno utilizzate per accedere ai dati dal provider.  Di seguito è riportato il codice di `Open` per l'origine dati, la sessione e del comando:  
  
```  
if (source.Open("MyProvider.MyProvider.1", NULL) != S_OK)  
   return;  
  
if (session.Open(source) != S_OK)  
   return;  
  
if (table.Open(session, _T("c:\\samples\\myprov\\myData.txt")) != S_OK)  
   return;  
```  
  
 Con le righe di codice che consentono di aprire ciascuna classe viene creato il relativo oggetto COM nel provider.  Per individuare il provider, utilizzare il ProgID del provider stesso.  È possibile ottenere il ProgID dal Registro di sistema oppure dal file MyProvider.rgs. Aprire la directory del provider e cercare la chiave ProgID.  
  
 Il file MyData.txt è incluso nell'esempio MyProv.  Per creare un file personalizzato, utilizzare un editor e digitare un numero pari di stringhe, premendo INVIO tra una stringa e l'altra.  Se si sposta il file, specificare il nuovo percorso.  
  
 Passare la stringa "c:\\\\samples\\\\myprov\\\\MyData.txt" alla riga `table.Open`.  Se si eseguono le istruzioni della chiamata `Open`, si noterà che questa stringa viene passata al metodo `SetCommandText` nel provider.  Tale stringa era stata utilizzata dal metodo `ICommandText::Execute`.  
  
 Per recuperare i dati, chiamare `MoveNext` sulla tabella.  `MoveNext` chiama le funzioni **IRowset::GetNextRows**, `GetRowCount` e `GetData`.  Se non sono presenti altre righe, ovvero se la posizione corrente all'interno del rowset è maggiore del valore di `GetRowCount`, il ciclo ha termine:  
  
```  
while (table.MoveNext() == S_OK)  
{  
   m_ctlString1.AddString(table.szField1);  
   m_ctlString2.AddString(table.szField2);  
}  
```  
  
 Se non sono presenti altre righe, i provider restituiscono **DB\_S\_ENDOFROWSET**.  Il valore **DB\_S\_ENDOFROWSET** non è pertanto un errore.  È sempre opportuno eseguire una verifica con `S_OK` prima di annullare un ciclo di recupero dati e non utilizzare la macro SUCCEEDED.  
  
 Sarà ora possibile compilare il programma ed eseguirne il test.  
  
## Vedere anche  
 [Miglioramento di un provider semplice in sola lettura](../../data/oledb/enhancing-the-simple-read-only-provider.md)