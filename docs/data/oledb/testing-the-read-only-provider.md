---
title: Test di Provider in sola lettura | Microsoft Docs
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
ms.openlocfilehash: aa56a62fa898f7ebe6c171af6f7246106b8e5ac7
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46038739"
---
# <a name="testing-the-read-only-provider"></a>Test di un provider in sola lettura

Per testare un provider, è necessario un consumer. È utile se il consumer può corrispondere a con il provider. I modelli consumer OLE DB sono un wrapper sottile per OLE DB e corrispondono con oggetti COM del provider. Poiché l'origine viene fornito con i modelli consumer, è possibile eseguire il debug di un provider con essi. I modelli consumer sono anche un modo molto piccolo e veloce per sviluppare le applicazioni consumer.  
  
L'esempio in questo argomento crea un'applicazione di creazione guidata applicazione MFC predefinita per un utente di test. L'applicazione di test è una finestra semplice con il codice del modello consumer OLE DB aggiunto.  
  
### <a name="to-create-the-test-application"></a>Per creare l'applicazione di test  
  
1. Scegliere **Nuovo** dal menu **File**, quindi fare clic su **Progetto**.  
  
1. Nel riquadro Tipi progetto selezionare la cartella **Progetti di Visual C++**. Nel riquadro dei modelli, selezionare **applicazione MFC**.  
  
1. Nome del progetto, immettere **TestProv**, quindi fare clic su **OK**.  
  
     Viene visualizzata la creazione guidata applicazione MFC.  
  
1. Nel **tipo di applicazione** pagina, selezionare **basato su finestra di dialogo**.  
  
1. Nel **funzionalità avanzate** pagina, selezionare **automazione**, quindi fare clic su **fine**.  
  
> [!NOTE]
>  L'applicazione non richiede il supporto di automazione se si aggiungono **CoInitialize** nelle **CTestProvApp:: InitInstance**.  
  
È possibile visualizzare e modificare la finestra di dialogo TestProv (IDD_TESTPROV_DIALOG), selezionarlo nella visualizzazione di risorse. Nella finestra di dialogo, inserire due caselle di riepilogo, una per ogni stringa del set di righe. Disattivare la proprietà di ordinamento per entrambe caselle di riepilogo, premere ALT + INVIO quando è selezionata una casella di riepilogo, fare clic sui **stili** scheda e la cancellazione il **ordinamento** casella di controllo. Inoltre, inserire un **eseguire** pulsante sulla finestra di dialogo per recuperare il file. La finestra di dialogo TestProv completata deve avere due caselle di riepilogo con etichettate "String 1" e "2 String", rispettivamente. include inoltre **OK**, **Cancel**, e **eseguire** pulsanti.  
  
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
  
Il codice rappresenta un record utente che definisce quali colonne saranno nel set di righe. Quando il client chiama `IAccessor::CreateAccessor`, Usa queste voci per specificare le colonne da associare. I modelli consumer OLE DB consentono anche di associare le colonne in modo dinamico. Le macro COLUMN_ENTRY rappresentano la versione lato client delle macro PROVIDER_COLUMN_ENTRY. Le due macro COLUMN_ENTRY specificano il numero ordinale, un membro di tipo, lunghezza e i dati per le due stringhe.  
  
Aggiungere una funzione del gestore per il **eseguiti** premendo CTRL e fare doppio clic sul pulsante i **eseguire** pulsante. Inserire il codice seguente nella funzione:  
  
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
  
Il `CCommand`, `CDataSource`, e `CSession` classi tutte appartengono ai modelli consumer OLE DB. Ogni classe corrisponde a un oggetto COM nel provider. Il `CCommand` oggetto accetta il `CProvider` (classe), dichiarati nel file di intestazione, come parametro di modello. Il `CProvider` parametro rappresenta le associazioni che usano per accedere ai dati dal provider. Di seguito è riportato il `Open` codice per l'origine dati, sessione e comando:  
  
```cpp  
if (source.Open("MyProvider.MyProvider.1", NULL) != S_OK)  
   return;  
  
if (session.Open(source) != S_OK)  
   return;  
  
if (table.Open(session, _T("c:\\samples\\myprov\\myData.txt")) != S_OK)  
   return;  
```  
  
Le righe per ciascuna delle classi aprire creano ciascun oggetto COM nel provider. Per individuare il provider, usare il ProgID del provider. È possibile ottenere il valore ProgID dal Registro di sistema o la ricerca file MyProvider (aprire directory e cercare la chiave ProgID del provider).  
  
Il file mydata. txt è incluso con l'esempio MyProv. Per creare un file personalizzato, usare un editor e digitare un numero pari di stringhe, premendo INVIO tra ogni stringa. Se si sposta il file, specificare il nome del percorso.  
  
Passare la stringa "c:\\\Samples.\\\myprov\\\MyData.txt" nel `table.Open` riga. Se si esegue la `Open` chiamata, noterete che questa stringa viene passata al `SetCommandText` (metodo) nel provider. Si noti che il `ICommandText::Execute` metodo usato tale stringa.  
  
Per recuperare i dati, chiamare `MoveNext` sulla tabella. `MoveNext` chiama il `IRowset::GetNextRows`, `GetRowCount`, e `GetData` funzioni. Quando non sono presenti più righe (vale a dire la posizione corrente nel set di righe è supera a `GetRowCount`), il ciclo termina:  
  
```cpp  
while (table.MoveNext() == S_OK)  
{  
   m_ctlString1.AddString(table.szField1);  
   m_ctlString2.AddString(table.szField2);  
}  
```  
  
Si noti che, se non sono presenti altre righe, provider restituiscono DB_S_ENDOFROWSET. Il valore di DB_S_ENDOFROWSET. inoltre non è un errore. È sempre consigliabile verificare con S_OK per annullare un ciclo di recupero di dati e non usare la macro SUCCEEDED.  
  
È ora possibile compilare e testare il programma.  
  
## <a name="see-also"></a>Vedere anche  

[Miglioramento di un provider semplice in sola lettura](../../data/oledb/enhancing-the-simple-read-only-provider.md)