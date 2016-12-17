---
title: "Considerazioni sulle prestazioni per l&#39;interoperabilit&#224; (C++) | Microsoft Docs"
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
  - "/clr (opzione del compilatore) [C++], considerazioni sulle prestazioni di interoperabilità"
  - "interoperabilità [C++], considerazioni sulle prestazioni"
  - "interoperabilità [C++], considerazioni sulle prestazioni"
  - "assembly misti [C++], considerazioni sulle prestazioni"
  - "platform invoke [C++], interoperabilità"
ms.assetid: bb9a282e-c3f8-40eb-a2fa-45d80d578932
caps.latest.revision: 8
caps.handback.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Considerazioni sulle prestazioni per l&#39;interoperabilit&#224; (C++)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

In questo argomento vengono forniti alcuni suggerimenti per la riduzione degli effetti delle transizioni di interoperabilità tra codice gestito e codice non gestito sulle prestazioni in fase di esecuzione.  
  
 Oltre ai meccanismi di interoperabilità disponibili negli altri linguaggi .NET quali Visual Basic e C\# \(P\/Invoke\), in Visual C\+\+ viene fornito anche il supporto per il meccanismo di interoperabilità specifico per Visual C\+\+ \(C\+\+ Interop\).  Per le applicazioni con particolari requisiti di prestazioni, è importante conoscere le eventuali implicazioni, a livello di prestazioni, di ciascuna tecnica di interoperabilità.  
  
 Indipendentemente dalla tecnica di interoperabilità utilizzata, è necessario utilizzare sequenze speciali di transizioni \(thunk\) ogni volta che una funzione gestita chiama una funzione non gestita e viceversa.  Questi thunk vengono inseriti automaticamente dal compilatore Visual C\+\+. Tuttavia, è importante tenere presente che queste transizioni possono causare una riduzione delle prestazioni.  
  
## Riduzione del numero di transizioni  
 Un modo per evitare o limitare l'impatto dei thunk consiste nell'effettuare il refactoring delle interfacce utilizzate in modo da ridurre il numero delle transizioni da codice gestito a codice non gestito e viceversa.  Per ottenere miglioramenti significativi nelle prestazioni si consiglia di effettuare questa operazione sulle interfacce particolarmente attive, ossia quelle che eseguono chiamate frequenti tra codice gestito e codice non gestito.  Una funzione gestita che chiama una funzione non gestita in un ciclo rigido, ad esempio, rappresenta un elemento ideale per il refactoring.  Se il ciclo viene spostato nel lato non gestito o viene creata un'alternativa gestita alla chiamata non gestita, ad esempio accodando i dati sul lato gestito ed effettuando quindi il marshalling di tutti i dati simultaneamente all'API non gestita dopo il ciclo, il numero delle transizioni può essere ridotto in modo significativo.  
  
## Confronto tra P\/Invoke C\+\+ interop  
 Per i linguaggi .NET, ad esempio Visual Basic e C\#, il metodo prestabilito per l'interoperabilità con i componenti nativi è P\/Invoke.  Essendo supportato da .NET Framework, P\/Invoke è supportato anche in Visual C\+\+. Quest'ultimo, tuttavia, fornisce anche un proprio meccanismo di interoperabilità, ossia C\+\+ Interop.  Poiché P\/Invoke non è indipendente dai tipi, è preferibile utilizzare C\+\+ Interop  che, oltre a consentire la segnalazione degli errori principalmente in fase di esecuzione, assicura anche vantaggi a livello di prestazioni rispetto a P\/Invoke.  
  
 Entrambe le tecniche richiedono l'esecuzione di alcune operazioni ogni volta che una funzione gestita chiama una funzione non gestita:  
  
-   Viene effettuato il marshalling degli argomenti della chiamata di funzione dai tipi CLR ai tipi nativi.  
  
-   Viene eseguito un thunk da funzione gestita a funzione non gestita.  
  
-   Viene chiamata la funzione non gestita, utilizzando le versioni native degli argomenti.  
  
-   Viene eseguito un thunk da funzione non gestita a funzione gestita.  
  
-   Viene effettuato il marshalling del tipo restituito e degli eventuali argomenti "out" o "in,out" dai tipi nativi ai tipi CLR.  
  
 L'esecuzione dei thunk è indispensabile per il corretto funzionamento della tecnica di interoperabilità. Al contrario, il marshalling dei dati dipende dai tipi di dati interessati, dalla firma della funzione e dal modo in cui verranno utilizzati i dati.  
  
 Con C\+\+ Interop viene effettuata la forma più semplice possibile di marshalling dei dati: i parametri vengono semplicemente copiati, bit per bit, tra il codice gestito e il codice non gestito, senza alcuna trasformazione.  Con P\/Invoke, invece, questo avviene solo se tutti i parametri sono tipi semplici e copiabili.  In caso contrario, devono essere eseguite operazioni molto complesse per convertire ciascun parametro gestito in un tipo nativo appropriato, e viceversa se gli argomenti sono contrassegnati come "out" o "in,out".  
  
 In altre parole, C\+\+ Interop utilizza il metodo più rapido possibile di marshalling dei dati, mentre P\/Invoke utilizza quello più complesso.  Questo significa che C\+\+ Interop, come si verifica in genere con C\+\+, fornisce automaticamente prestazioni ottimali, lasciando al programmatore il compito di risolvere i casi in cui questo comportamento non risulta sicuro o appropriato.  
  
 C\+\+ Interop richiede quindi che il marshalling dei dati venga fornito esplicitamente, ma consente al programmatore di decidere liberamente la tecnica più appropriata, in base alla tipologia dei dati, e la modalità di utilizzo.  Inoltre, sebbene il comportamento del marshalling dei dati di P\/Invoke possa essere in qualche modo personalizzato, C\+\+ Interop consente la personalizzazione a livello di singola chiamata,  cosa non possibile con P\/Invoke.  
  
 Per ulteriori informazioni su C\+\+ Interop, vedere [Utilizzo delle funzionalità di interoperabilità C\+\+ \(PInvoke implicito\)](../dotnet/using-cpp-interop-implicit-pinvoke.md).  
  
## Vedere anche  
 [Assembly misti \(nativi e gestiti\)](../dotnet/mixed-native-and-managed-assemblies.md)