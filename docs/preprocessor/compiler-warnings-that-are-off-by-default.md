---
title: "Avvisi del compilatore disattivati per impostazione predefinita | Microsoft Docs"
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
  - "C"
helpviewer_keywords: 
  - "compilatore cl.exe, impostazione delle opzioni"
  - "avvisi, compilatore"
ms.assetid: 69809cfb-a38a-4035-b154-283a61938df8
caps.latest.revision: 39
caps.handback.revision: 37
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Avvisi del compilatore disattivati per impostazione predefinita
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Il compilatore include avvisi che vengono disattivati per impostazione predefinita perché la maggior parte degli utenti non desidera visualizzarli.  È tuttavia possibile abilitare questi avvisi utilizzando una delle opzioni seguenti.  
  
 `#pragma warning(default :`  `warning_number` `)`  
 L'avviso specificato \(`warning_number`\) è abilitato al relativo livello predefinito.  La documentazione dell'avviso contiene il livello predefinito dell'avviso.  
  
 `#pragma warning(` `warning_level`  `:`  `warning_number` `)`  
 L'avviso specificato \(`warning_number`\) è abilitato al livello specificato \(`warning_level`\).  
  
 [\/Wall](../build/reference/compiler-option-warning-level.md)  
 **\/Wall** abilita tutti gli avvisi, inclusi quelli disabilitati per impostazione predefinita.  
  
 I seguenti avvisi sono disabilitati per impostazione predefinita.  
  
|||  
|-|-|  
|[C4061](../error-messages/compiler-warnings/compiler-warning-level-4-c4061.md) \(livello 4\)|l'enumeratore '%$S' nell'istruzione switch dell'enum '%$pS' non viene gestito da un'etichetta case in modo esplicito|  
|[C4062](../error-messages/compiler-warnings/compiler-warning-level-4-c4062.md) \(livello 3\)|l'identificatore' enumeratore '%$S' nell'istruzione switch dell'enum '%$pS' non viene gestito|  
|C4191 \(livello 3\)|'operatore\/operazione': conversione non affidabile da 'tipo di espressione' in 'tipo richiesto'|  
|[C4242](../error-messages/compiler-warnings/compiler-warning-level-4-c4242.md) \(livello 4\)|'identificatore' : conversione da '%$T' to '%$T'. Possibile perdita di dati|  
|[C4254](../error-messages/compiler-warnings/compiler-warning-level-4-c4254.md) \(livello 4\)|'operatore': conversione da '%$T' a '%$T'. Possibile perdita di dati|  
|[C4255](../error-messages/compiler-warnings/compiler-warning-level-4-c4255.md) \(livello 4\)|'funzione': nessun prototipo di funzione dato. Conversione di '\(\)' in '\(void\)'|  
|[C4263](../error-messages/compiler-warnings/compiler-warning-level-4-c4263.md) \(livello 4\)|'funzione': la funzione membro non esegue l'override di nessuna funzione membro virtuale di una classe base|  
|[C4264](../error-messages/compiler-warnings/compiler-warning-level-1-c4264.md) \(livello 1\)|'funzione\_virtuale': override non disponibile per la funzione membro virtuale dalla base '%$pC'. La funzione è nascosta.|  
|[C4265](../error-messages/compiler-warnings/compiler-warning-level-3-c4265.md) \(livello 3\)|'classe': la classe ha funzioni virtuali ma il distruttore non è virtuale|  
|[C4266](../error-messages/compiler-warnings/compiler-warning-level-4-c4266.md) \(livello 4\)|'funzione': override non disponibile per la funzione membro virtuale dalla base 'type'. La funzione è nascosta.|  
|[C4287](../error-messages/compiler-warnings/compiler-warning-level-3-c4287.md) \(livello 3\)|'operatore': errata corrispondenza tra costanti unsigned\/negative|  
|[C4289](../error-messages/compiler-warnings/compiler-warning-level-4-c4289.md) \(livello 4\)|utilizzata estensione non standard. 'variabile': variabile di controllo ciclo dichiarata nel ciclo for e utilizzata all'esterno dell'ambito del ciclo for|  
|[C4296](../error-messages/compiler-warnings/compiler-warning-level-4-c4296.md) \(livello 4\)|'operatore': l'espressione è sempre false|  
|[C4302](../error-messages/compiler-warnings/compiler-warning-level-2-c4302.md) \(livello 2\)|'conversione': troncamento da '%$T' a '%$T'|  
|[C4311](../error-messages/compiler-warnings/compiler-warning-level-1-c4311.md) \(livello 1\)|'variabile': troncamento puntatore da 'tipo' a 'tipo'|  
|[C4312](../error-messages/compiler-warnings/compiler-warning-level-1-c4312.md) \(livello 1\)|'operazione': conversione da 'tipo1' a 'tipo2', di dimensioni maggiori|  
|[C4339](../error-messages/compiler-warnings/compiler-warning-level-4-c4339.md) \(livello 4\)|'tipo': rilevato l'utilizzo di un tipo non definito nei metadati CLR; l'uso di questo tipo può causare un'eccezione della fase di esecuzione|  
|[C4342](../error-messages/compiler-warnings/compiler-warning-level-1-c4342.md) \(livello 1\)|modifica del comportamento: è stato chiamato 'funzione', ma in versioni precedenti è stato chiamato un operatore membro|  
|[C4350](../error-messages/compiler-warnings/compiler-warning-level-1-c4350.md) \(livello 1\)|modifica del comportamento: viene chiamato 'membro1' anziché 'membro2'|  
|[C4355](../error-messages/compiler-warnings/compiler-warning-c4355.md)|"this": utilizzato nell'elenco degli inizializzatori dei membri di base|  
|[C4365](../error-messages/compiler-warnings/compiler-warning-level-4-c4365.md) \(livello 4\)|'azione': conversione da '%$T' a '%$T', mancata corrispondenza tra signed\/unsigned|  
|C4370 \(livello 3\)|layout della classe è stato modificato rispetto alla versione precedente del compilatore per migliorare la compressione|  
|C4371 \(livello 3\)|è possibile che il layout della classe sia stato modificato rispetto alla versione precedente del compilatore per migliorare la compressione del membro 'membro'|  
|C4388 \(livello 4\)|errata corrispondenza tra signed e unsigned|  
|[C4412](../error-messages/compiler-warnings/compiler-warning-level-2-c4412.md) \(livello 2\)|'funzione': la firma della funzione contiene il tipo '%$T'; non è sicuro passare oggetti di C\+\+ tra codice pure e codice misto o nativo.|  
|[C4431](../error-messages/compiler-warnings/compiler-warning-level-4-c4431.md) \(livello 4\)|identificatore di tipo mancante, verrà utilizzato int.  Nota: default\-int non è più supportato in C\+\+|  
|[C4435](../error-messages/compiler-warnings/compiler-warning-level-4-c4435.md) \(livello 4\)|'classe1': il layout dell'oggetto in \/vd2 verrà modificato a causa della base virtuale '%$S'|  
|[C4437](../error-messages/compiler-warnings/compiler-warning-level-4-c4437.md) \(livello 4\)|dynamic\_cast dalla base virtuale '%$S' a '%$S' potrebbe non riuscire in alcuni contesti|  
|C4444 \(livello 3\)|'\_\_unaligned' di livello superiore non implementato nel contesto|  
|C4471 \(livello 4\)|una dichiarazione con prototipo di un'enumerazione senza ambito deve avere un tipo sottostante \(presupposto int\)|  
|C4472 \(livello 1\)|'identifier' è un'enumerazione nativa: aggiungere un indicatore di accesso \(privato\/pubblico\) per dichiarare un'enumerazione gestita|  
|[C4514](../error-messages/compiler-warnings/compiler-warning-level-4-c4514.md) \(livello 4\)|'funzione': funzione inline senza riferimenti rimossa|  
|[C4536](../error-messages/compiler-warnings/compiler-warning-level-4-c4536.md) \(livello 4\)|'nome tipo': il nome del tipo eccede il limite di '%d' caratteri stabilito per i metadati|  
|[C4545](../error-messages/compiler-warnings/compiler-warning-level-1-c4545.md) \(livello 1\)|l'espressione prima della virgola restituisce una funzione senza elenco di argomenti|  
|[C4546](../error-messages/compiler-warnings/compiler-warning-level-1-c4546.md) \(livello 1\)|nella chiamata di funzione prima della virgola manca l'elenco degli argomenti|  
|[C4547](../error-messages/compiler-warnings/compiler-warning-level-1-c4547.md) \(livello 1\)|'operatore': l'operatore prima della virgola non ha effetto. Previsto operatore con effetto collaterale.|  
|[C4548](../error-messages/compiler-warnings/compiler-warning-level-1-c4548.md) \(livello 1\)|l'espressione prima della virgola non ha effetto. Prevista espressione con effetto collaterale.|  
|[C4549](../error-messages/compiler-warnings/compiler-warning-level-1-c4549.md) \(livello 1\)|'operatore': l'operatore prima della virgola non ha effetto. Utilizzare '%$L'?|  
|[C4555](../error-messages/compiler-warnings/compiler-warning-level-1-c4555.md) \(livello 1\)|l'espressione non ha effetto. Prevista espressione con effetto collaterale|  
|[C4557](../error-messages/compiler-warnings/compiler-warning-level-3-c4557.md) \(livello 3\)|'\_\_assume' contiene l'effetto 'effetto'|  
|[C4571](../error-messages/compiler-warnings/compiler-warning-level-4-c4571.md) \(livello 4\)|messaggio informativo: la semantica di catch\(...\) è cambiata dopo Visual C\+\+ 7.1; le eccezioni strutturate \(SEH\) non vengono più rilevate|  
|C4574 \(livello 4\)|"identificatore" è definito come "0 ": si intendeva utilizzare "identificatore \#if"?|  
|C4608 \(livello 3\)|'symbol1' è già stato inizializzato dal membro di un'altra unione nell'elenco degli inizializzatori, 'symbol2'|  
|[C4619](../error-messages/compiler-warnings/compiler-warning-level-3-c4619.md) \(livello 3\)|avviso \#pragma: nessun numero di avviso '%d'|  
|[C4623](../error-messages/compiler-warnings/compiler-warning-level-4-c4623.md) \(livello 4\)|'classe derivata': impossibile generare il costruttore predefinito poiché un costruttore predefinito della classe base è inaccessibile|  
|[C4625](../error-messages/compiler-warnings/compiler-warning-level-4-c4625.md) \(livello 4\)|'classe derivata': impossibile generare il costruttore di copia poiché un costruttore di copia della classe base è inaccessibile|  
|[C4626](../error-messages/compiler-warnings/compiler-warning-level-4-c4626.md) \(livello 4\)|'classe derivata': impossibile generare l'operatore di assegnazione poiché un operatore di assegnazione della classe base è inaccessibile|  
|[C4628](../error-messages/compiler-warnings/compiler-warning-level-1-c4628.md) \(livello 1\)|digraph non supportati con \-Ze.  La sequenza di caratteri 'digraph' non è stata interpretata come token alternativo per 'char'|  
|[C4640](../error-messages/compiler-warnings/compiler-warning-level-3-c4640.md) \(livello 3\)|'istanza': la costruzione di oggetti statici locali non è thread\-safe|  
|[C4668](../error-messages/compiler-warnings/compiler-warning-level-4-c4668.md) \(livello 4\)|'simbolo' non è definita come macro del preprocessore. Sostituzione con '0' per 'direttive'|  
|C4682 \(livello 4\)|'symbol': nessun attributo specificato per il parametro direzionale. Verrà utilizzato \[in\]|  
|[C4686](../error-messages/compiler-warnings/compiler-warning-level-3-c4686.md) \(livello 3\)|'tipo\-definito dall'utente': possibile modifica del comportamento. Modifica nella convenzione di chiamata per il valore restituito del tipo definito dall'utente.|  
|[C4692](../error-messages/compiler-warnings/compiler-warning-level-1-c4692.md) \(livello 1\)|'funzione': la firma del membro non privato contiene il tipo nativo privato 'tipo\_nativo' dell'assembly|  
|[C4710](../error-messages/compiler-warnings/compiler-warning-level-4-c4710.md) \(livello 4\)|'funzione': funzione non resa inline|  
|[C4738](../error-messages/compiler-warnings/compiler-warning-level-3-c4738.md) \(livello 3\)|archiviazione in memoria del risultato float a 32 bit, possibile riduzione delle prestazioni|  
|C4767 \(livello 4\)|il nome della sezione "symbol" è più lungo di 8 caratteri e verrà troncato dal linker|  
|C4786 \(livello 3\)|"symbol'': nome oggetto troncato a ''numero" caratteri nelle informazioni di debug|  
|[C4820](../error-messages/compiler-warnings/compiler-warning-level-4-c4820.md) \(livello 4\)|'byte' byte di riempimento aggiunti dopo costrutto 'nome\_membro'|  
|[C4826](../error-messages/compiler-warnings/compiler-warning-level-2-c4826.md) \(livello 2\)|Conversione da '%$T' a '%$T' con segno esteso.  Questa situazione può produrre un comportamento imprevisto in fase di esecuzione.|  
|[C4837](../error-messages/compiler-warnings/compiler-warning-level-4-c4837.md) \(livello 4\)|rilevato trigramma '??%c' sostituito da '%c'|  
|[C4905](../error-messages/compiler-warnings/compiler-warning-level-1-c4905.md) \(livello 1\)|cast di stringa letterale wide su "LPSTR"|  
|[C4906](../error-messages/compiler-warnings/compiler-warning-level-1-c4906.md) \(livello 1\)|cast di stringa letterale su "LPWSTR"|  
|[C4917](../error-messages/compiler-warnings/compiler-warning-level-1-c4917.md) \(livello 1\)|'dichiaratore': un GUID può essere associato solo a una classe, un'interfaccia o uno spazio dei nomi|  
|[C4928](../error-messages/compiler-warnings/compiler-warning-level-1-c4928.md) \(livello 1\)|inizializzazione di copia non valida; sono state implicitamente applicate più conversioni definite dall'utente|  
|[C4931](../error-messages/compiler-warnings/compiler-warning-level-4-c4931.md) \(livello 4\)|si suppone che la libreria dei tipi sia stata compilata per puntatori a numero bit|  
|[C4946](../error-messages/compiler-warnings/compiler-warning-level-1-c4946.md) \(livello 1\)|reinterpret\_cast utilizzato tra le classi correlate 'classe1' e 'classe2'|  
|C4962|'funzione': ottimizzazioni PGO disabilitate perché le ottimizzazioni provocano l'incoerenza dei dati di profilo|  
|[C4986](../error-messages/compiler-warnings/compiler-warning-c4986.md) \(livello 4\)|"symbol": la specifica dell'eccezione non corrisponde alla dichiarazione precedente|  
|C4987 \(livello 4\)|utilizzata estensione non standard: 'throw \(...\)'|  
|C4988 \(livello 4\)|"symbol": variabile dichiarata nell'ambito esterno della classe\/funzione|  
  
## Vedere anche  
 [warning](../preprocessor/warning.md)