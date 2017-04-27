---
title: C4800 avvisi del compilatore C4999 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords:
- C4806
- C4807
- C4810
- C4811
- C4812
- C4813
- C4816
- C4817
- C4822
- C4825
- C4827
- C4872
- C4880
- C4881
- C4882
- C4900
- C4910
- C4912
- C4913
- C4916
- C4918
- C4920
- C4921
- C4925
- C4926
- C4932
- C4934
- C4935
- C4936
- C4937
- C4938
- C4939
- C4944
- C4947
- C4950
- C4951
- C4952
- C4953
- C4954
- C4955
- C4956
- C4957
- C4958
- C4959
- C4960
- C4961
- C4962
- C4963
- C4966
- C4970
- C4971
- C4972
- C4973
- C4974
- C4981
- C4985
- C4987
- C4988
- C4989
- C4990
- C4991
- C4992
- C4997
- C4998
- C4999
- C4808
- C4809
dev_langs:
- C++
ms.assetid: c3182430-8b3b-4ab2-a532-5cd436707dc8
caps.latest.revision: 9
author: corob-msft
ms.author: corob
manager: ghogen
translation.priority.mt:
- cs-cz
- pl-pl
- pt-br
- tr-tr
translationtype: Machine Translation
ms.sourcegitcommit: 4bac7b2942f9d72674b8092dc7bf64174dd3c349
ms.openlocfilehash: ac03a99c1a9413b697b6e40101bf1c3e2be9a3a6
ms.lasthandoff: 04/24/2017

---
# <a name="compiler-warnings-c4800-through-c4999"></a>C4800 avvisi del compilatore C4999
Gli articoli in questa parte della documentazione contengono informazioni su un subset degli avvisi del compilatore Visual C++. È possibile accedere alle informazioni qui o nella finestra di Output in Visual Studio, è possibile selezionare un numero di errore e quindi premere il tasto F1.  
  
> [!NOTE]
>  Non tutti [!INCLUDE[vcprvc](../../build/includes/vcprvc_md.md)] errore o avviso è documentato in MSDN. In molti casi, il messaggio di diagnostica fornisce tutte le informazioni che sono disponibile. Se si ritiene che un messaggio di errore richieda una spiegazione aggiuntiva, è possibile informarne Microsoft. È possibile utilizzare la forma di commenti e suggerimenti in questa pagina o passare alla barra dei menu in Visual Studio e scegliere **Guida**, **segnalare un Bug**, o è possibile inviare un report di suggerimenti o bug in [Microsoft Connect](http://connect.microsoft.com/VisualStudio).  
  
È possibile trovare assistenza per errori e avvisi nei forum pubblici MSDN. Il [del linguaggio Visual C++](http://go.microsoft.com/fwlink/?LinkId=158195) forum è a domande e discussioni sul [!INCLUDE[vcprvc](../../build/includes/vcprvc_md.md)] sintassi del linguaggio e compilatore. Il [generali di Visual C++](http://go.microsoft.com/fwlink/?LinkId=158194) forum è per domande su [!INCLUDE[vcprvc](../../build/includes/vcprvc_md.md)] che non sono trattati in altri forum. È inoltre possibile trovare informazioni su errori e avvisi in [Overflow dello Stack](http://stackoverflow.com/).  
  
## <a name="in-this-section"></a>Contenuto della sezione  
  
|Avviso|Messaggio|  
|-------------|-------------|  
|[Avviso del compilatore (livello 3) C4800](../../error-messages/compiler-warnings/compiler-warning-level-3-c4800.md)|'type': imposto valore booleano 'true' o 'false' (avviso di prestazioni)|  
|[Avviso del compilatore (livello 1) C4803](../../error-messages/compiler-warnings/compiler-warning-level-1-c4803.md)|'method': il metodo raise ha una classe di archiviazione diverso da quello dell'evento 'event'|  
|[Avviso del compilatore (livello 1) C4804](../../error-messages/compiler-warnings/compiler-warning-level-1-c4804.md)|'operation': utilizzo non affidabile del tipo 'bool' nell'operazione|  
|[Avviso del compilatore (livello 1) C4805](../../error-messages/compiler-warnings/compiler-warning-level-1-c4805.md)|'operation': combinazione non affidabile del tipo 'type' e il tipo 'type' nell'operazione|  
|Avviso del compilatore (livello 1) C4806|'operation': operazione non affidabile: nessun valore di tipo 'type' promosso al tipo 'type' può eguagliare la costante data|  
|Avviso del compilatore (livello 1) C4807|'operation': combinazione non affidabile del tipo 'type' e il campo di bit signed del tipo 'type'|  
|Avviso del compilatore (livello 1) C4808|case 'value' non è un valore valido per la condizione switch di tipo 'bool'|  
|Avviso del compilatore (livello 1) C4809|l'etichetta 'default' dell'istruzione switch è ridondante. Le etichette 'case' coprono già tutti i casi possibili.|  
|Avviso del compilatore (livello 1) C4810|valore di pragma pack(show) == n|  
|Avviso del compilatore (livello 1) C4811|valore di pragma conform(forScope, show) == value|  
|Avviso del compilatore (livello 1) C4812|tipo di dichiarazione obsoleto: usare 'new_syntax'|  
|Avviso del compilatore (livello 1) C4813|'function': una funzione friend delle classi locali debba essere dichiarata in precedenza|  
|Avviso del compilatore (livello 4) C4816|'param': parametro contiene una matrice con dimensione zero che verrà troncata (a meno che l'oggetto viene passato per riferimento)|  
|Avviso del compilatore (livello 1) C4817|'member': utilizzo non valido di '.' per accedere al membro. compilatore sostituito con '->'|  
|[Avviso del compilatore (livello 1) C4819](../../error-messages/compiler-warnings/compiler-warning-level-1-c4819.md)|Il file contiene un carattere che non può essere rappresentato nella tabella codici corrente (numero). Salvare il file in formato Unicode per evitare la perdita di dati|  
|[Avviso del compilatore (livello 4) C4820](../../error-messages/compiler-warnings/compiler-warning-level-4-c4820.md)|'byte' byte di riempimento aggiunti dopo costrutto 'nome_membro'|  
|[Avviso del compilatore (livello 1) C4821](../../error-messages/compiler-warnings/compiler-warning-level-1-c4821.md)|Impossibile determinare il tipo di codifica Unicode. Salvare il file con firma (BOM).|  
|Avviso del compilatore (livello 1) C4822|'member function': funzione membro della classe locale non ha un corpo|  
|[Avviso del compilatore (livello 3) C4823](../../error-messages/compiler-warnings/compiler-warning-level-3-c4823.md)|'function': utilizza puntatori di blocco ma rimozione semantica non è abilitata. È consigliabile utilizzare /EHa|  
|Avviso del compilatore (livello 4) C4825||  
|Avviso del compilatore (livello 3) C4827|Un metodo 'ToString' pubblico con 0 parametri deve essere contrassegnato come virtuale e override|  
|[Avviso del compilatore (livello 1) C4829](../../error-messages/compiler-warnings/compiler-warning-level-1-c4829.md)|Parametri probabilmente errati per la funzione main. Considerare ' int main (Platform:: Array\<platform:: String ^ > ^ argv)'|  
|[Avviso del compilatore (livello 1) C4835](../../error-messages/compiler-warnings/compiler-warning-level-1-c4835.md)|'variabile': l'inizializzatore dei dati esportati non verrà eseguita fino a quando il codice gestito viene eseguito per prima nell'assembly su host|  
|[Avviso del compilatore (livello 1) C4838](../../error-messages/compiler-warnings/compiler-warning-level-1-c4838.md)|conversione da 'type_1' a 'type_2' richiede una conversione di narrowing|  
|[Avviso del compilatore C4867](../../error-messages/compiler-warnings/compiler-warning-c4867.md)|'function': chiamata di funzione senza elenco di argomenti; Utilizzare 'chiamata' per creare un puntatore a membro|  
|[Avviso del compilatore C4868](../../error-messages/compiler-warnings/compiler-warning-c4868.md)|il compilatore 'file(line_number)' non può imporre l'ordine di valutazione da sinistra a destra nell'elenco di inizializzazione tra parentesi graffe|  
|Avviso del compilatore (livello 2) C4872|divisione a virgola mobile per zero rilevata durante la compilazione del grafico delle chiamate per concurrency::parallel_for_each in: '%s'|  
|Avviso del compilatore (livello 1) C4880|esegue il cast da 'const type_1' a 'type_2': cast di constness da un puntatore o riferimento lontano può comportare un comportamento non definito in una funzione con restrizioni amp|  
|Avviso del compilatore (livello 4) C4881|il costruttore e/o il distruttore non verrà richiamato per la variabile tile_static 'variable'|  
|Avviso del compilatore (livello 1) C4882|il passaggio di funtori con operatori di chiamata non const a concurrency::parallel_for_each è deprecato|  
|Avviso C4900 del compilatore|Errata corrispondenza tra 'strumento1' versione 'version1' e 'strumento2' versione 'version2'|  
|[Avviso del compilatore (livello 1) C4905](../../error-messages/compiler-warnings/compiler-warning-level-1-c4905.md)|cast di stringa letterale wide su "LPSTR"|  
|[Avviso del compilatore (livello 1) C4906](../../error-messages/compiler-warnings/compiler-warning-level-1-c4906.md)|cast di stringa letterale su "LPWSTR"|  
|Avviso del compilatore (livello 1) C4910|'\<identificatore >: 'dllexport' e 'extern' sono incompatibili in un'istanza esplicita|  
|Avviso del compilatore (livello 1) C4912|'attribute': l'attributo produce un comportamento indefinito su un tipo annidato definito dall'utente|  
|Avviso del compilatore (livello 4) C4913|l'operatore binario definito dall'utente ',' esiste, ma nessuno degli overload può convertire tutti gli operandi. Verrà utilizzato l'operatore binario ',' incorporato predefinito.|  
|Avviso del compilatore (livello 1) C4916|per avere un dispid, '%$S' deve essere introdotto da un'interfaccia|  
|[Avviso del compilatore (livello 1) C4917](../../error-messages/compiler-warnings/compiler-warning-level-1-c4917.md)|'dichiaratore': un GUID può solo essere associato a una classe, interfaccia o spazio dei nomi|  
|Avviso del compilatore (livello 4) C4918|'character': carattere non valido nell'elenco di ottimizzazione pragma|  
|Avviso del compilatore (livello 1) C4920|enum enum membro member_1 = value_1 già presente in enum'enum ' come member_2 = value_2|  
|Avviso del compilatore (livello 3) C4921|'%s': il valore di attributo '%s' non deve essere specificato più volte|  
|Avviso del compilatore (livello 1) C4925|'method': impossibile chiamare il metodo dell'interfaccia dispatch tramite script|  
|Avviso del compilatore (livello 1) C4926|'identifier': simbolo già definito. Attributi ignorati.|  
|[Avviso del compilatore (livello 1) C4927](../../error-messages/compiler-warnings/compiler-warning-level-1-c4927.md)|conversione non valida; sono state implicitamente applicate più conversioni definite dall'utente|  
|[Avviso del compilatore (livello 1) C4928](../../error-messages/compiler-warnings/compiler-warning-level-1-c4928.md)|inizializzazione di copia non valida; sono state implicitamente applicate più conversioni definite dall'utente|  
|[Avviso del compilatore (livello 1) C4929](../../error-messages/compiler-warnings/compiler-warning-level-1-c4929.md)|'file': libreria dei tipi contiene un elemento union: verrà ignorato il qualificatore 'embedded_idl'|  
|[Avviso del compilatore (livello 1) C4930](../../error-messages/compiler-warnings/compiler-warning-level-1-c4930.md)|'prototipo': funzione con prototipo non chiamata (è destinata a una definizione di variabile)?|  
|[Avviso del compilatore (livello 4) C4931](../../error-messages/compiler-warnings/compiler-warning-level-4-c4931.md)|si suppone che la libreria dei tipi sia stata compilata per puntatori a numero bit|  
|Avviso del compilatore (livello 4) C4932|__identifier(Identifier) e \__identifier(identifier) distinguibili.|  
|Avviso del compilatore (livello 1) C4934|'__delegate(multicast)' è deprecata, utilizzare '\_delegate ' invece|  
|Avviso del compilatore (livello 1) C4935|identificatore di accesso assembly modificato da 'access'|  
|Avviso del compilatore (livello 1) C4936|questo __declspec è supportato solo con la compilazione con /clr o /clr:pure|  
|Avviso del compilatore (livello 4) C4937|'text1' e 'text2' sono indistinguibili come argomenti per 'directive'|  
|Avviso del compilatore (livello 4) C4938|'var': variabile di riduzione a virgola mobile può causare risultati incoerenti in /fp: strict o fenv_access #pragma|  
|Avviso C4939 del compilatore|#pragma vtordisp è deprecato e verrà rimossa in una versione futura di Visual C++|  
|Avviso del compilatore (livello 1) C4944|'symbol': Impossibile importare il simbolo da 'assembly1': 'symbol' esiste già nell'ambito corrente|  
|[Avviso del compilatore (livello 1) C4945](../../error-messages/compiler-warnings/compiler-warning-level-1-c4945.md)|'symbol': Impossibile importare il simbolo da 'assembly1': come 'simbolo' è già stato importato da un altro assembly 'assembly2'|  
|[Avviso del compilatore (livello 1) C4946](../../error-messages/compiler-warnings/compiler-warning-level-1-c4946.md)|reinterpret_cast utilizzato tra le classi correlate 'classe1' e 'classe2'|  
|Avviso del compilatore (livello 1) C4947|'type_or_member': contrassegnato come obsoleto|  
|[Avviso del compilatore (livello 2) C4948](../../error-messages/compiler-warnings/compiler-warning-level-2-c4948.md)|tipo restituito di 'accessor' non corrisponde al tipo dell'ultimo parametro della funzione set corrispondente|  
|[Avviso del compilatore (livello 1 e livello 4) C4949](../../error-messages/compiler-warnings/compiler-warning-level-1-and-level-4-c4949.md)|pragma 'managed' e 'unmanaged' sono significativi solo se compilati con ' / /CLR [: opzione]'|  
|Avviso del compilatore (livello 1) C4950|'type_or_member': contrassegnato come obsoleto|  
|Avviso C4951 del compilatore|'function' è stato modificato dopo la raccolta dei dati di profilo, dati di profilo della funzione non utilizzati|  
|Avviso C4952 del compilatore|'function': dati di profilo non trovato nel database 'pgd_file 'del programma|  
|Avviso C4953 del compilatore|'Function' inline modificata dopo la raccolta dei dati di profilo dati di profilo non utilizzati|  
|Avviso C4954 del compilatore|'function': profilatura non eseguita (contiene un'espressione switch Int64)|  
|Avviso C4955 del compilatore|'import2': importazione ignorata; importazione già eseguita da 'import1'|  
|Avviso del compilatore (livello 1) C4956|'type': tipo non verificabile|  
|Avviso del compilatore (livello 1) C4957|'cast': cast esplicito da 'cast da' a 'cast_to' non è verificabile|  
|Avviso del compilatore (livello 1) l'avviso C4958|'operation': aritmetica dei puntatori non verificabile|  
|Avviso del compilatore (livello 1) C4959|Impossibile definire 'type' di tipo non gestito in /CLR: safe perché l'accesso ai membri produce codice non verificabile|  
|Avviso C4960 del compilatore|'function' è troppo grande per il profiling|  
|Avviso C4961 del compilatore|Dati di profilo non sottoposti a merge in '.pgd file', ottimizzazioni PGO disabilitate|  
|Avviso C4962 del compilatore|'function': ottimizzazioni PGO disabilitate perché le ottimizzazioni provocano l'incoerenza i dati di profilo|  
|Avviso C4963 del compilatore|%s': dati di profilo non trovati. opzioni del compilatore diverse utilizzate nella compilazione instrumentata|  
|[Avviso del compilatore (livello 1) C4964](../../error-messages/compiler-warnings/compiler-warning-level-1-c4964.md)|Nessuna opzione di ottimizzazione specificata; le informazioni sul profilo non verranno raccolte|  
|[Avviso del compilatore (livello 1) C4965](../../error-messages/compiler-warnings/compiler-warning-level-1-c4965.md)|boxing implicito dell'integer 0; utilizzare nullptr o un cast esplicito|  
|Avviso C4966 del compilatore|'%s' ha un'annotazione __code_seg con nome segmento, annotazione non supportati|  
|Avviso C4970 del compilatore|costruttore di delegato: oggetto di destinazione ignorato poiché '%$pS' è statico|  
|Avviso del compilatore (livello 1) C4971|Ordine argomenti: \<oggetto di destinazione >, \<funzione di destinazione > per il costruttore di delegato è obsoleto, utilizzare \<funzione di destinazione >, \<oggetto di destinazione = "" >|  
|Avviso del compilatore (livello 1) C4972|La modifica o il trattamento diretto del risultato di una operazione di unboxing come lvalue non è verificabile|  
|Avviso C4973 del compilatore|'%$S': contrassegnato come deprecato|  
|Avviso C4974 del compilatore|'%$S': contrassegnato come deprecato|  
|Avviso C4981 del compilatore|Warbird: funzione '%$pD' contrassegnata come __forceinline non resa inline perché contiene la semantica delle eccezioni|  
|Avviso del compilatore (livello 3) C4985|nome del simbolo ': attributi non presenti nella dichiarazione precedente.|  
|[Avviso del compilatore C4986](../../error-messages/compiler-warnings/compiler-warning-c4986.md)|'%$pS': la specifica di eccezione non corrisponde alla dichiarazione precedente|  
|Avviso del compilatore (livello 4) C4987|utilizzata estensione non standard: 'throw (...)'|  
|Avviso del compilatore (livello 4) C4988|'%$S': variabile dichiarata all'esterno dell'ambito di classe/funzione|  
|Avviso C4989 del compilatore|'%s': tipo con definizioni in conflitto.|  
|Avviso C4990 del compilatore|Warbird: %s|  
|Avviso C4991 del compilatore|Warbird: function '%$pD' contrassegnata come __forceinline non resa inline perché il livello di protezione di inline è maggiore dell'elemento padre|  
|Avviso C4992 del compilatore|Warbird: funzione '%$pD' contrassegnata come __forceinline non resa inline perché contiene assembly inline che non possono essere protetti|  
|[Avviso del compilatore (livello 3) C4995](../../error-messages/compiler-warnings/compiler-warning-level-3-c4995.md)|'function': nome contrassegnato come obsoleto #pragma|  
|[Avviso del compilatore (livello 3) C4996](../../error-messages/compiler-warnings/compiler-warning-level-3-c4996.md)|'%$pS': %$*|  
|Avviso del compilatore (livello 1) C4997|'class': la coclasse non implementa un'interfaccia COM o una pseudo-interfaccia|  
|Avviso del compilatore (livello 1) C4998|PREVISIONE DISATTESA: %s(%d)|  
|C4999 avviso del compilatore|AVVISO SCONOSCIUTO %$N Per ulteriori informazioni, scegliere Supporto tecnico dal menu ? di Visual C++ %$N o aprire il file della Guida relativo al supporto tecnico.|
