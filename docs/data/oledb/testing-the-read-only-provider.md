---
title: Test del Provider di sola lettura | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-data
ms.topic: reference
dev_langs:
- C++
helpviewer_keywords:
- testing, OLE DB providers
- testing providers
- OLE DB providers, calling
- OLE DB providers, testing
ms.assetid: e4aa30c1-391b-41f8-ac73-5270e46fd712
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: 703d33f44fae534b206050e85086edb1ccc816f9
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33112680"
---
# <a name="testing-the-read-only-provider"></a>Test di un provider in sola lettura
Per testare un provider, è necessario un consumer. È utile se il consumer può corrispondere a con il provider. I modelli consumer OLE DB sono wrapper di OLE DB e corrispondano con gli oggetti COM di provider. Poiché l'origine viene fornito con i modelli consumer, è facile eseguire il debug di un provider con essi. I modelli consumer sono inoltre un modo molto ridotti e più rapido per sviluppare applicazioni consumer.  
  
 Nell'esempio di questo argomento consente di creare un'applicazione di creazione guidata applicazione MFC predefinito per un consumer di test. L'applicazione di test è una semplice finestra di dialogo con codice di modello consumer OLE DB aggiunto.  
  
### <a name="to-create-the-test-application"></a>Per creare l'applicazione di test  
  
1.  Scegliere **Nuovo** dal menu **File**, quindi fare clic su **Progetto**.  
  
2.  Nel riquadro Tipi progetto selezionare la **progetti Visual C++** cartella. Nel riquadro Modelli selezionare **applicazione MFC**.  
  
3.  Immettere il nome del progetto, **TestProv**, quindi fare clic su **OK**.  
  
     Verrà visualizzata la creazione guidata applicazione MFC.  
  
4.  Nel **tipo di applicazione** selezionare **basato su finestra di dialogo**.  
  
5.  Nel **funzionalità avanzate** selezionare **automazione**, quindi fare clic su **fine**.  
  
> [!NOTE]
>  L'applicazione non richiede il supporto di automazione se si aggiungono **CoInitialize** in **CTestProvApp:: InitInstance**.  
  
 È possibile visualizzare e modificare la finestra di dialogo TestProv (IDD_TESTPROV_DIALOG) selezionandola in visualizzazione risorse. Nella finestra di dialogo, inserire due caselle di riepilogo, uno per ogni stringa del set di righe. Disabilitare la proprietà di ordinamento per entrambi caselle di riepilogo premendo ALT + INVIO quando è selezionata una casella di riepilogo, fare clic su di **stili** scheda e la cancellazione di **ordinamento** casella di controllo. Inoltre, inserire un **eseguire** pulsante nella finestra di dialogo per recuperare il file. Nella finestra di dialogo TestProv termine deve avere due caselle di riepilogo con l'etichetta "String 1" e "String 2", rispettivamente. include inoltre **OK**, **Annulla**, e **eseguire** pulsanti.  
  
 Aprire il file di intestazione per la classe di finestra di dialogo (in questo caso TestProvDlg). Aggiungere il codice seguente al file di intestazione (di fuori di qualsiasi dichiarazione di classe):  
  
```cpp
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
  
 Il codice rappresenta un record dell'utente che definisce le colonne nel set di righe. Quando il client chiama **IAccessor:: CreateAccessor**, vengono utilizzate queste voci per specificare le colonne da associare. I modelli consumer OLE DB consentono inoltre di associare le colonne in modo dinamico. Le macro COLUMN_ENTRY rappresentano la versione sul lato client delle macro PROVIDER_COLUMN_ENTRY. Le due macro COLUMN_ENTRY specificano il numero ordinale di tipo, lunghezza e il membro dati per le due stringhe.  
  
 Aggiungere una funzione del gestore per il **eseguire** premendo CTRL e fare doppio clic sul pulsante di **eseguire** pulsante. Inserire il codice seguente nella funzione:  
  
```cpp
///////////////////////////////////////////////////////////////////////  
// TestProvDlg.cpp  
  
void CtestProvDlg::OnRun()  
{  
   CCommand<CAccessor<CProvider>> table;  
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
  
 Il `CCommand`, `CDataSource`, e `CSession` classi appartengono tutti i modelli consumer OLE DB. Ogni classe corrisponde a un oggetto COM nel provider. Il `CCommand` oggetto accetta il `CProvider` (classe), dichiarati nel file di intestazione, come un parametro di modello. Il `CProvider` parametro rappresenta le associazioni che consentono di accedere ai dati dal provider. Ecco il `Open` codice per l'origine dati, sessione e comando:  
  
```  
if (source.Open("MyProvider.MyProvider.1", NULL) != S_OK)  
   return;  
  
if (session.Open(source) != S_OK)  
   return;  
  
if (table.Open(session, _T("c:\\samples\\myprov\\myData.txt")) != S_OK)  
   return;  
```  
  
 Le righe per aprire ciascuna delle classi di creano ciascun oggetto COM nel provider. Per individuare il provider, utilizzare il valore ProgID del provider. È possibile ottenere il valore ProgID dal Registro di sistema o cercare i file MyProvider (aprire directory e cercare la chiave ProgID del provider).  
  
 Il file mydata è incluso nell'esempio MyProv. Per creare un file personalizzati, utilizzare un editor e digitare un numero pari di stringhe, premendo INVIO tra una stringa. Se si sposta il file, modificare il nome del percorso.  
  
 Passare la stringa "c:\\\samples\\\myprov\\\MyData.txt" nel `table.Open` riga. Se si esegue il `Open` chiamata, vedere questa stringa viene passata per il `SetCommandText` metodo nel provider. Si noti che il `ICommandText::Execute` metodo utilizzato tale stringa.  
  
 Per recuperare i dati, chiamare `MoveNext` nella tabella. `MoveNext` chiamate di **IRowset:: GetNextRows**, `GetRowCount`, e `GetData` funzioni. Quando non sono presenti più righe (vale a dire la posizione corrente nel set di righe è maggiore di `GetRowCount`), il ciclo termina:  
  
```  
while (table.MoveNext() == S_OK)  
{  
   m_ctlString1.AddString(table.szField1);  
   m_ctlString2.AddString(table.szField2);  
}  
```  
  
 Si noti che se non sono presenti altre righe, i provider restituiscono **DB_S_ENDOFROWSET**. Il **DB_S_ENDOFROWSET** valore non è un errore. È sempre consigliabile verificare `S_OK` per annullare un ciclo di recupero di dati e non utilizzare la macro SUCCEEDED.  
  
 È ora possibile compilare e testare il programma.  
  
## <a name="see-also"></a>Vedere anche  
 [Miglioramento di un provider semplice in sola lettura](../../data/oledb/enhancing-the-simple-read-only-provider.md)