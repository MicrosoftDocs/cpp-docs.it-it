---
title: "Aggiunta guidata funzione membro | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vc.codewiz.function.overview"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Aggiunta guidata funzione membro [C++]"
ms.assetid: 13b6defc-faa6-4d57-83db-9dd854cbea3d
caps.latest.revision: 6
caps.handback.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Aggiunta guidata funzione membro
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

È possibile utilizzare questa procedura guidata per aggiungere una dichiarazione di funzione membro al file di intestazione e un'implementazione della funzione membro stub al file di implementazione per la classe selezionata.  
  
 Dopo aver aggiunto la funzione membro mediante la procedura guidata, è possibile modificare il codice nell'ambiente di sviluppo.  
  
 **Tipo restituito**  
 Consente di impostare il tipo restituito della funzione membro che si sta aggiungendo.  È possibile immettere un tipo restituito personalizzato o selezionarlo dall'elenco dei tipi disponibili.  Per informazioni sui tipi, vedere [Tipi fondamentali](../cpp/fundamental-types-cpp.md).  
  
||||  
|-|-|-|  
|`char`|`int`|`unsigned int`|  
|**double**|**long**|`unsigned long`|  
|**float**|**short**|`void`|  
|`HRESULT`|`unsigned char`||  
  
 **Nome funzione**  
 Consente di impostare il nome della funzione membro che si sta aggiungendo.  
  
 **Tipo di parametro**  
 Consente di impostare il tipo per ogni parametro aggiunto per la funzione membro se quest'ultima dispone di parametri.  È possibile immettere un tipo di parametro personalizzato o selezionarlo dall'elenco dei tipi disponibili.  
  
||||  
|-|-|-|  
|`char`|`int`|`unsigned char`|  
|**double**|**long**|`unsigned int`|  
|**float**|**short**|`unsigned long`|  
  
 **Nome parametro**  
 Consente di impostare il nome del parametro aggiunto per la funzione membro se quest'ultima dispone di parametri.  
  
 **Elenco parametri**  
 Consente di visualizzare un elenco di parametri aggiunti alla funzione membro.  Per aggiungere un parametro all'elenco, immettere un tipo e un nome rispettivamente nelle caselle **Tipo parametro** e **Nome parametro**, quindi scegliere **Aggiungi**.  Per rimuovere un parametro dall'elenco, selezionarlo e scegliere **Rimuovi**.  
  
 **Accesso**  
 Consente di impostare l'accesso alla funzione membro.  I modificatori di accesso sono parole chiave che specificano l'accesso di altre classi alla funzione membro.  Per ulteriori informazioni sulla definizione dell'accesso, vedere [Controllo dell'accesso ai membri](../cpp/member-access-control-cpp.md).  Per impostazione predefinita, il livello di accesso a ogni funzione membro è impostato su **public**.  
  
-   [public](../cpp/public-cpp.md)  
  
-   [protected](../cpp/protected-cpp.md)  
  
-   [private](../cpp/private-cpp.md)  
  
 Impostare la nuova funzione membro come Static o Virtual, Inline o Pure.  Se la funzione membro è impostata come Pure, la casella di controllo `Virtual` sarà selezionata, mentre la casella **Inline** non sarà disponibile.  L'impostazione predefinita è una funzione membro non virtual e non static.  
  
|Opzione|Descrizione|  
|-------------|-----------------|  
|[Static](../misc/static-cpp.md)|Utilizzare questa opzione per specificare che la funzione è globale e può essere chiamata all'esterno della classe, anche senza creare un'istanza della classe.  La funzione membro non ha accesso a membri non static.  Una funzione membro `Static` non può essere virtual.|  
|[Modalità virtuale](../cpp/virtual-cpp.md)|Utilizzare questa opzione per assicurare la chiamata alla funzione membro corretta per un oggetto, indipendentemente dall'espressione utilizzata per effettuare la chiamata.  Una funzione membro `Virtual` non può essere static.|  
|**Pure**|Utilizzare questa opzione per indicare che non viene fornita alcuna implementazione per la funzione membro virtual dichiarata; **Pure** pertanto può essere specificata solo su funzioni membro virtual.  Per ulteriori informazioni, vedere [Sintassi delle dichiarazioni di membri di classe](../misc/class-member-declaration-syntax.md).<br /><br /> Una classe che contiene almeno una funzione membro virtual pure è considerata astratta.  Le classi derivate dalla classe astratta sono anch'esse astratte se non implementano la funzione membro virtual pure.|  
|[Inline](../cpp/inline-functions-cpp.md)|Utilizzare questa opzione per indicare al compilatore di inserire una copia del codice funzione membro in ogni posizione in cui viene chiamata la funzione membro.  Una funzione membro **Inline** non può essere pure.|  
  
 **File CPP**  
 Consente di impostare la posizione del file in cui è scritta l'implementazione della funzione membro stub.  Per impostazione predefinita, si tratta del file CPP della classe alla quale viene aggiunta la funzione membro.  Fare clic sul pulsante con i puntini di sospensione per modificare il nome del file.  L'implementazione della funzione membro viene aggiunta al contenuto del file selezionato.  
  
 **Commento**  
 Consente di fornire un commento nel file di intestazione per la funzione membro.  
  
 **Firma funzione**  
 Consente di visualizzare la funzione membro così come compare nel codice quando si sceglie **Fine**.  Non è possibile modificare il testo di questa casella.  Per modificare la funzione membro, modificare il testo delle caselle appropriate della procedura guidata.  
  
## Vedere anche  
 [Aggiunta di una funzione membro](../ide/adding-a-member-function-visual-cpp.md)