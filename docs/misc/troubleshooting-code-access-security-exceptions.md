---
title: "Risoluzione dei problemi relativi alle eccezioni di sicurezza dall&#39;accesso di codice | Microsoft Docs"
ms.custom: ""
ms.date: "12/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "vs-ide-debug"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "JScript"
  - "VB"
  - "CSharp"
  - "C++"
helpviewer_keywords: 
  - "CodeAccessPermission (classe)"
  - "CodeAccessSecurityException (classe)"
  - "sicurezza dall'accesso di codice, risoluzione dei problemi"
  - "sicurezza [debugger], risoluzione dei problemi relativi alla sicurezza dall'accesso di codice"
  - "risoluzione dei problemi relativi alla sicurezza di accesso al codice"
ms.assetid: ca368d3b-f6d0-4c89-af59-d94f343fca35
caps.latest.revision: 12
caps.handback.revision: 12
author: "mikeblome"
ms.author: "mblome"
manager: "douge"
---
# Risoluzione dei problemi relativi alle eccezioni di sicurezza dall&#39;accesso di codice
Le autorizzazioni consentono di controllare le operazioni che il codice può e non può eseguire. In fase di esecuzione a un'applicazione viene assegnata un set di autorizzazioni dall'ambiente di esecuzione. Se l'applicazione dispone di autorizzazioni sufficienti, verrà eseguita correttamente. In caso contrario, si verificherà un'eccezione di sicurezza.  
  
 Le autorizzazioni assegnate al codice dipendono dalla posizione dalla quale l'applicazione è stata avviata, ad esempio Internet, la rete Intranet oppure il computer locale, e dalle impostazioni di sicurezza configurate nel computer nel quale l'applicazione viene eseguita. Poiché queste impostazioni possono variare da computer a computer, non è sempre possibile prevedere se il codice avrà autorizzazioni sufficienti.  
  
 La richiesta di autorizzazioni assicura l'esecuzione del codice se i criteri di sicurezza nel computer locale lo consentono. Se non si richiedono le autorizzazioni necessarie, esiste il rischio che il codice non venga eseguito. Per altre informazioni sulle autorizzazioni di accesso al codice e su come richiederle, vedere [Autorizzazioni di accesso al codice](http://msdn.microsoft.com/it-it/e5ae402f-6dda-4732-bbe8-77296630f675) o [NIB: Richiesta delle autorizzazioni](http://msdn.microsoft.com/it-it/0447c49d-8cba-45e4-862c-ff0b59bebdc2). Per altre informazioni sui blocchi `Try...Catch`, vedere [Try...Catch...Finally Statement](../Topic/Try...Catch...Finally%20Statement%20\(Visual%20Basic\).md).  
  
 Se necessario, per le applicazioni [!INCLUDE[ndptecclick](../ide/includes/ndptecclick_md.md)] è possibile richiedere ulteriori autorizzazioni tramite la pagina di sicurezza di Progettazione applicazioni. Per altre informazioni, vedere [Procedura: impostare le autorizzazioni personalizzate per un'applicazione ClickOnce](../Topic/How%20to:%20Set%20Custom%20Permissions%20for%20a%20ClickOnce%20Application.md).  
  
 Alcune possibili cause delle eccezioni di sicurezza dall'accesso di codice sono:  
  
-   **Appunti.** Le operazioni di incolla dagli Appunti a livello di codice possono essere eseguite solo nel codice gestito perché gli Appunti potrebbero contenere informazioni riservate.  
  
-   **Accesso al Registro di sistema o al file system.** L'accesso al file system locale è soggetto a limitazioni. Se si accede a un file o una risorsa distribuita con l'assembly, usare il codice `Assembly.GetExecutingAssembly.Location` per ottenere il percorso dell'assembly.  
  
-   **Accesso alla rete.** Assicurarsi che l'assembly utilizzi lo stesso protocollo con il quale è stato caricato. In genere, le comunicazioni di rete sono consentite solo verso l'URL di origine dell'assembly.  
  
-   **Stampa.** Il software in esecuzione nell'area Internet può eseguire operazioni di stampa solo tramite una finestra di dialogo comune. Deve usare la stampante predefinita solo se usa una finestra di dialogo comune per consentire all'utente di selezionare una stampante.  
  
-   **Serializzazione.** La possibilità di ricompilare un oggetto da dati arbitrari è limitata al codice eseguito con attendibilità totale. Per la serializzazione XML, da un punto di vista tecnico il tipo `XmlSerializer` dovrebbe poter essere usato da codice parzialmente attendibile. Per altre informazioni sul tipo `XmlSerializer`, vedere [Classe XmlSerializer](https://msdn.microsoft.com/en-us/library/system.xml.serialization.xmlserializer.aspx).  
  
-   **Reflection.** Molte funzionalità dell'ambiente di esecuzione correlate alla reflection non possono essere usate da codice parzialmente attendibile.  
  
## Test del codice per verificare se verrà generata un'eccezione di sicurezza dell'accesso di codice  
 Se un blocco di codice può generare un'eccezione `CodeAccessSecurityException`, usare un blocco `Try...Catch` per consentire l'esecuzione del codice quando possibile e ovviare all'errore quando l'esecuzione non è possibile.  
  
 In alcuni casi è necessario progettare un'applicazione in modo che adegui il proprio comportamento in base alle autorizzazioni concesse dal sistema host. Potrebbe ad esempio essere necessario disabilitare un comando Stampa in un menu se l'applicazione non dispone delle autorizzazioni di stampa.  
  
 Per effettuare questa verifica, è possibile creare un'istanza di una classe derivata da `CodeAccessPermission`, ad esempio `FileIOPermission`. Eseguire quindi il metodo `Demand` sull'autorizzazione all'interno di un blocco `Try...Catch`. Se l'eccezione viene generata, l'assembly non dispone dell'autorizzazione.  
  
 Nell'esempio riportato di seguito viene verificato se l'assembly dispone dell'autorizzazione `EventLogPermission`. A tale scopo viene eseguito o creato un oggetto `EventLogPermission`, quindi viene eseguito il relativo metodo `Demand` all'interno di un blocco `Try...Catch` per verificare se l'operazione `Demand` ha esito positivo.  
  
```  
Try Dim MyPermission As New EventLogPermission MyPermission.Demand() MsgBox(MyPermission.ToString()) Catch ex As Exception MsgBox("Assembly lacks EventLogPermission.") End Try  
```  
  
## Vedere anche  
 [Autorizzazioni di accesso al codice](http://msdn.microsoft.com/it-it/e5ae402f-6dda-4732-bbe8-77296630f675)   
 [NIB: Richiesta di autorizzazioni](http://msdn.microsoft.com/it-it/0447c49d-8cba-45e4-862c-ff0b59bebdc2)   
 [Code Access Security Basics](../Topic/Code%20Access%20Security%20Basics.md)