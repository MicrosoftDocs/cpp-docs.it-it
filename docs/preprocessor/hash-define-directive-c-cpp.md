---
title: "Direttiva #define (C/C++) | Microsoft Docs"
ms.custom: ""
ms.date: "12/15/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "#define"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "#define (direttiva)"
  - "#define (direttiva), sintassi"
  - "define (direttiva) (#define)"
  - "define (direttiva) (#define), sintassi"
  - "preprocessore, direttive"
ms.assetid: 33cf25c6-b24e-40bf-ab30-9008f0391710
caps.latest.revision: 13
caps.handback.revision: 13
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Direttiva #define (C/C++)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

La direttiva `#define` crea una *macro*, ovvero l'associazione di un identificatore o di un identificatore con parametri con una stringa di token.  Dopo che la macro è stata definita, il compilatore può sostituire la stringa di token per ogni occorrenza dell'identificatore presente nel file di origine.  
  
## Sintassi  
 `#define` *identifier* *token\-string*opt  
  
 `#define` *identifier*`(` *identifier*opt`,` *...* `,` *identifier*opt `)` *token\-string*opt  
  
## Note  
 La direttiva `#define` indica al compilatore di sostituire *token\-string* per tutte le occorrenze di *identifier* nel file di origine.  *identifier* viene sostituito solo quando costituisce un token.  Ovvero, l'*identifier* non viene sostituito se visualizzato in un commento, in una stringa o come parte di un identificatore più lungo.  Per ulteriori informazioni, vedere [Token C\+\+](../cpp/tokens-cpp.md).  
  
 L'argomento *token\-string* è costituito da una serie di token, quali parole chiave, costanti o istruzioni complete.  Uno o più spazi vuoti devono separare *token\-string* da *identifier*.  Questo spazio vuoto non è considerato parte del testo sostituito; né viene considerato alcuno spazio vuoto dopo l'ultimo token del testo.  
  
 Una direttiva `#define` senza *token\-string* rimuove le occorrenze di *identifier* dal file di origine.  L'*identifier* rimane definito e può essere testato utilizzando le direttive `#if defined` e `#ifdef`.  
  
 La seconda forma di sintassi definisce una macro simile a una funzione con parametri.  Questa forma accetta un elenco facoltativo di parametri che devono essere visualizzati tra parentesi.  Dopo che la macro è stata definita, ogni occorrenza successiva di *identifier*\( *identifier*opt, ..., *identifier*opt\) viene sostituita con una versione dell'argomento *token\-string* che presenta argomenti effettivi in sostituzione dei parametri formali.  
  
 I nomi dei parametri formali vengono visualizzati in *token\-string* per contrassegnare le posizioni in cui vengono sostituiti i valori effettivi.  Ogni nome di parametro può essere visualizzato più volte in *token\-string* e i nomi possono essere visualizzati in qualsiasi ordine.  Il numero degli argomenti nella chiamata deve corrispondere al numero di parametri nella definizione della macro.  Il libero utilizzo delle parentesi garantisce che gli argomenti effettivi complessi vengano interpretati correttamente.  
  
 I parametri formali nell'elenco sono separati da virgole.  Ogni nome nell'elenco deve essere univoco e l'elenco deve essere racchiuso tra parentesi.  *identifier* e la parentesi di apertura non possono essere separati da spazi.  Utilizzare la concatenazione della riga \(posizionare una barra rovesciata `\` immediatamente prima del carattere di nuova riga\) per le direttive che occupano più righe nel codice sorgente.  L'ambito di un nome del parametro formale si estende alla nuova riga che termina *token\-string*.  
  
 Se una macro è stata definita nella seconda forma di sintassi, le successive istanze testuali seguite da un elenco di argomenti indicano una chiamata di macro.  Gli argomenti effettivi che seguono un'istanza di *identifier* nel file di origine vengono associati ai parametri formali corrispondenti nella definizione della macro.  Ogni parametro formale in *token\-string* che non sia preceduto da un operatore per la creazione di stringhe \(`#`\), di caratteri \(`#@`\) o di concatenamento dei token \(`##`\) o non seguito da un operatore `##`, viene sostituito dall'argomento corrispondente effettivo.  Eventuali macro presenti nell'argomento effettivo vengono espanse prima che la direttiva sostituisca il parametro formale. \(Gli operatori sono descritti in [Operatori del preprocessore](../preprocessor/preprocessor-operators.md)\).  
  
 Negli esempi seguenti di macro con argomenti viene illustrata la seconda forma della sintassi di `#define`:  
  
```  
// Macro to define cursor lines   
#define CURSOR(top, bottom) (((top) << 8) | (bottom))  
  
// Macro to get a random integer with a specified range   
#define getrandom(min, max) \  
    ((rand()%(int)(((max) + 1)-(min)))+ (min))  
```  
  
 Gli argomenti con effetti collaterali talvolta determinano la restituzione di risultati imprevisti da parte delle macro.  Un parametro formale specificato potrebbe essere visualizzato più volte in *token\-string*.  Se tale parametro formale è sostituito da un'espressione con effetti collaterali, l'espressione, con i relativi effetti collaterali, può essere valutata più volte. \(Vedere gli esempi in [Inserimento di concatenamento dei token operatore \(\#\#\)](../preprocessor/token-pasting-operator-hash-hash.md)\).  
  
 La direttiva `#undef` causa la dimenticanza della definizione del preprocessore di un identificatore.  Per ulteriori informazioni, vedere [La direttiva \#undef](../preprocessor/hash-undef-directive-c-cpp.md).  
  
 Se il nome della macro definita appare in *token\-string* \(anche come risultato di un'altra espansione di una macro\), questo non viene espanso.  
  
 Un secondo oggetto `#define` per una macro con lo stesso nome genera un avviso a meno che la seconda sequenza del token non sia identica alla prima.  
  
 **Sezione specifica Microsoft**  
  
 Microsoft C\/C\+\+ consente di ridefinire una macro se la nuova definizione è sintatticamente identica alla definizione originale.  In altre parole, due definizioni possono avere nomi di parametri diversi.  Questo comportamento è diverso da [!INCLUDE[vcpransi](../preprocessor/includes/vcpransi_md.md)] C, che richiede che le due definizioni siano identiche a livello lessicale.  
  
 Ad esempio, le due macro seguenti sono identiche a eccezione dei nomi del parametro.  [!INCLUDE[vcpransi](../preprocessor/includes/vcpransi_md.md)] C non consente tale ridefinizione, ma Microsoft C\/C\+\+ esegue la compilazione senza errori.  
  
```  
#define multiply( f1, f2 ) ( f1 * f2 )  
#define multiply( a1, a2 ) ( a1 * a2 )  
```  
  
 D'altro canto, le due macro seguenti non sono identiche e genereranno un avviso in Microsoft C\/C\+\+.  
  
```  
#define multiply( f1, f2 ) ( f1 * f2 )  
#define multiply( a1, a2 ) ( b1 * b2 )  
```  
  
 **Fine sezione specifica Microsoft**  
  
 In questo esempio viene illustrata la direttiva `#define`:  
  
```  
#define WIDTH       80  
#define LENGTH      ( WIDTH + 10 )  
```  
  
 La prima istruzione definisce l'identificatore `WIDTH` come costante Integer 80 e definisce `LENGTH` in termini di `WIDTH` come costante Integer 10.  Ogni occorrenza di `LENGTH` viene sostituita da \(`WIDTH + 10`\).  Ogni occorrenza di `WIDTH + 10` viene a sua volta sostituita dall'espressione \(`80 + 10`\).  Le parentesi intorno a `WIDTH + 10` sono importanti in quanto controllano l'interpretazione nelle istruzioni simili alle seguenti:  
  
```  
var = LENGTH * 20;  
```  
  
 Dopo la fase di pre\-elaborazione l'istruzione diventa:  
  
```  
var = ( 80 + 10 ) * 20;  
```  
  
 che restituisce 1800.  Senza parentesi, il risultato è:  
  
```  
var = 80 + 10 * 20;  
```  
  
 che restituisce 280.  
  
 **Sezione specifica Microsoft**  
  
 La definizione delle macro e delle costanti con l'opzione del compilatore [\/D](../build/reference/d-preprocessor-definitions.md) ha lo stesso effetto dell'utilizzo di una direttiva di pre\-elaborazione `#define` all'inizio del file.  È possibile definire fino a 30 macro utilizzando l'opzione \/D.  
  
 **Fine sezione specifica Microsoft**  
  
## Vedere anche  
 [Direttive per il preprocessore](../preprocessor/preprocessor-directives.md)