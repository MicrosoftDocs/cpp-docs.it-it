---
title: "Considerazioni sulle prestazioni per l'interoperabilità (C++) | Documenti Microsoft"
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs:
- C++
helpviewer_keywords:
- /clr compiler option [C++], interop performance considerations
- platform invoke [C++], interoperability
- interop [C++], performance consideraitons
- mixed assemblies [C++], performance considerations
- interoperability [C++], performance considerations
ms.assetid: bb9a282e-c3f8-40eb-a2fa-45d80d578932
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- dotnet
ms.openlocfilehash: 25d098ebb52809a36735f71eecedcc4c2a186225
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="performance-considerations-for-interop-c"></a>Considerazioni sulle prestazioni per l'interoperabilità (C++)
In questo argomento vengono fornite linee guida per ridurre l'effetto delle transizioni di interoperabilità gestito e non sulle prestazioni in fase di esecuzione.  
  
 Visual C++ supporta gli stessi meccanismi interoperabilità altri linguaggi .NET quali Visual Basic e c# (P/Invoke), ma fornisce anche il supporto di interoperabilità che è specifico di Visual C++ (C++ interop). Per le applicazioni critiche per le prestazioni, è importante comprendere le implicazioni sulle prestazioni di ogni tecnica di interoperabilità.  
  
 Indipendentemente dalla tecnica di interoperabilità utilizzata, le sequenze di transizione speciale, chiamate thunk, sono necessari ogni volta che una funzione gestita chiama un non gestito (funzione) e vice versa. Questi thunk vengono inseriti automaticamente dal compilatore Visual C++, ma è importante tenere presente che ha complessivamente, queste transizioni possono essere dispendiosa in termini di prestazioni.  
  
## <a name="reducing-transitions"></a>Riducendo le transizioni  
 Un modo per evitare o ridurre il costo di thunk è effettuare il refactoring delle interfacce utilizzate in transizioni gestito e di ridurre al minimo. Includendo interfacce "frammentate", ossia quelle che eseguono chiamate frequenti oltre i limiti gestiti/non gestiti non è possibile effettuare miglioramento delle prestazioni. Una funzione gestita che chiama una funzione non gestita in un ciclo rigido, ad esempio, è un buon candidato per il refactoring. Se il ciclo viene spostato al lato non gestito oppure se un'alternativa gestita per la chiamata non gestita viene creata (ad esempio essere Accodamento dei dati sul lato gestito e quindi marshalling per le API non gestita in una sola volta dopo il ciclo), il numero di transizioni può essere ridotto sign ificantly.  
  
## <a name="pinvoke-vs-c-interop"></a>Visual Studio di P/Invoke. interoperabilità C++  
 Per i linguaggi .NET, ad esempio Visual Basic e c#, il metodo prestabilito per l'interazione con componenti nativi è P/Invoke. Poiché P/Invoke è supportato da .NET Framework, Visual C++ supporta anche, ma Visual C++ fornisce anche il supporto di interoperabilità, che viene considerato l'interoperabilità C++. Interoperabilità C++ è preferibile P/Invoke perché P/Invoke non è indipendente dai tipi. Di conseguenza, gli errori vengono segnalati principalmente in fase di esecuzione, ma l'interoperabilità C++ dispone anche di ottenere prestazioni migliori rispetto a P/Invoke.  
  
 Entrambe le tecniche richiedono ogni volta che una funzione gestita chiama una funzione non gestita di alcune operazioni:  
  
-   Gli argomenti della funzione chiamata vengono effettuato il marshalling da CLR per tipi nativi.  
  
-   Viene eseguito un thunk a gestito.  
  
-   Viene chiamata la funzione non gestita (utilizzando le versioni native degli argomenti).  
  
-   Viene eseguito un thunk non gestito a gestito.  
  
-   Il tipo restituito e "out" o "in, out" vengono effettuato il marshalling di argomenti da codice nativo a tipi CLR.  
  
 I thunk gestiti/non gestiti non sono necessari per l'interoperabilità a funzionare, ma il marshalling dei dati che è necessario varia a seconda dei tipi di dati coinvolti, la firma della funzione e la modalità con cui i dati verranno utilizzati.  
  
 Il marshalling dei dati eseguita tramite l'interoperabilità C++ è la forma più semplice possibile: i parametri vengono semplicemente copiati oltre i limiti gestiti/non gestiti in modo bit per bit; viene eseguita alcuna trasformazione affatto. Per P/Invoke, questo vale solo se tutti i parametri sono semplici, tipi copiabili. In caso contrario, P/Invoke esegue operazioni molto complesse per convertire ogni parametro gestito in un tipo nativo appropriato, e viceversa se gli argomenti sono contrassegnati come "out" o "in, out".  
  
 In altre parole, l'interoperabilità C++ Usa il metodo più rapido possibile di marshalling dei dati, mentre P/Invoke Usa il metodo più affidabile. Ciò significa che per impostazione predefinita, l'interoperabilità C++ (in genere per C++) fornisce prestazioni ottimali e che il programmatore è responsabile dell'indirizzamento casi questo comportamento non è sicuro o appropriato.  
  
 Interoperabilità C++ richiede pertanto che il marshalling dei dati è necessario specificare in modo esplicito, ma il vantaggio è che il programmatore è libero di decidere cosa è appropriata, in base alla tipologia dei dati e come è possibile utilizzare. Inoltre, anche se può essere modificato il comportamento di marshalling dei dati di P/Invoke in personalizzati per un livello, l'interoperabilità C++ consente di dati di marshalling per essere personalizzati in base a una singola chiamata a. Questo non è possibile con P/Invoke.  
  
 Per ulteriori informazioni sull'interoperabilità C++, vedere [utilizzando l'interoperabilità C++ (PInvoke implicito)](../dotnet/using-cpp-interop-implicit-pinvoke.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Assembly misti (nativi e gestiti)](../dotnet/mixed-native-and-managed-assemblies.md)