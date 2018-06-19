---
title: '#define (direttiva) (C/C++) | Documenti Microsoft'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: reference
f1_keywords:
- '#define'
dev_langs:
- C++
helpviewer_keywords:
- define directive (#define), syntax
- preprocessor, directives
- define directive (#define)
- '#define directive, syntax'
- '#define directive'
ms.assetid: 33cf25c6-b24e-40bf-ab30-9008f0391710
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 8875c2b2c744a16f936fd2220826f23413a0e6c9
ms.sourcegitcommit: d55ac596ba8f908f5d91d228dc070dad31cb8360
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/07/2018
ms.locfileid: "33846155"
---
# <a name="define-directive-cc"></a>Direttiva #define (C/C++)
Il `#define` crea un *macro*, ovvero l'associazione di un identificatore o identificatore con parametri con una stringa di token. Dopo che la macro è stata definita, il compilatore può sostituire la stringa di token per ogni occorrenza dell'identificatore presente nel file di origine.  
  
## <a name="syntax"></a>Sintassi  
 `#define` *Identificatore* *token-string*consenso esplicito  
  
 `#define` *Identificatore* `(` *identificatore*opt`,`*...*  `,` *identificatore*opt`)`*token-string*consenso esplicito  
  
## <a name="remarks"></a>Note  
 Il `#define` direttiva indica al compilatore di sostituire *token-string* per ogni occorrenza di *identificatore* nel file di origine. Il *identificatore* viene sostituito solo quando form di un token. Vale a dire *identificatore* non viene sostituita se viene visualizzato in un commento, in una stringa o come parte di un identificatore più lungo. Per ulteriori informazioni, vedere [token](../cpp/tokens-cpp.md).  
  
 Il *token-string* argomento è costituito da una serie di token, ad esempio parole chiave, costanti o le istruzioni complete. Uno o più caratteri di spazio necessario separare *token-string* da *identificatore*. Questo spazio vuoto non è considerato parte del testo sostituito; né viene considerato alcuno spazio vuoto dopo l'ultimo token del testo.  
  
 Oggetto `#define` senza un *token-string* rimuove le occorrenze di *identificatore* dal file di origine. Il *identificatore* rimane definiti e possono essere testati tramite il `#if defined` e `#ifdef` direttive.  
  
 La seconda forma di sintassi definisce una macro simile a una funzione con parametri. Questa forma accetta un elenco facoltativo di parametri che devono essere visualizzati tra parentesi. Dopo la macro è definito, ogni successiva occorrenza di *identificatore*( *identificatore*opt,..., *identificatore*opt) viene sostituito con una versione di  *stringa di token* argomento che contiene gli argomenti effettivi sostituiti dai parametri formali.  
  
 I nomi dei parametri formali vengono visualizzati *token stringa* per indicare la posizione in cui vengono sostituiti con i valori effettivi. Ogni nome di parametro può essere visualizzati più volte *token-string*, e i nomi possono essere visualizzati in qualsiasi ordine. Il numero degli argomenti nella chiamata deve corrispondere al numero di parametri nella definizione della macro. Il libero utilizzo delle parentesi garantisce che gli argomenti effettivi complessi vengano interpretati correttamente.  
  
 I parametri formali nell'elenco sono separati da virgole. Ogni nome nell'elenco deve essere univoco e l'elenco deve essere racchiuso tra parentesi. Non possono separare spazi *identificatore* e la parentesi di apertura. Utilizzare il concatenamento di riga, inserire una barra rovesciata (`\`) immediatamente prima del carattere di nuova riga, per le direttive lungo su più righe di origine. L'ambito di un nome di parametro formale esteso per la nuova riga finale *token stringa*.  
  
 Se una macro è stata definita nella seconda forma di sintassi, le successive istanze testuali seguite da un elenco di argomenti indicano una chiamata di macro. Gli argomenti effettivi che segue un'istanza di *identificatore* nel file di origine vengono associati ai corrispondenti parametri formali nella definizione della macro. Ogni parametro formale nel *token di stringa* che non è preceduto da una creazione di stringhe (`#`), per (`#@`), o concatenamento dei token (`##`) (operatore), o non è seguita da un `##` operatore, sostituito dall'argomento effettivo corrispondente. Eventuali macro presenti nell'argomento effettivo vengono espanse prima che la direttiva sostituisca il parametro formale. (Gli operatori sono descritti [operatori del preprocessore](../preprocessor/preprocessor-operators.md).)  
  
 Negli esempi seguenti di macro con argomenti viene illustrata la seconda forma della sintassi di `#define`:  
  
```  
// Macro to define cursor lines   
#define CURSOR(top, bottom) (((top) << 8) | (bottom))  
  
// Macro to get a random integer with a specified range   
#define getrandom(min, max) \  
    ((rand()%(int)(((max) + 1)-(min)))+ (min))  
```  
  
 Gli argomenti con effetti collaterali talvolta determinano la restituzione di risultati imprevisti da parte delle macro. È ammesso più di una volta in un determinato parametro formale *token stringa*. Se tale parametro formale è sostituito da un'espressione con effetti collaterali, l'espressione, con i relativi effetti collaterali, può essere valutata più volte. (Vedere gli esempi in [operatore di concatenamento dei Token (#)](../preprocessor/token-pasting-operator-hash-hash.md).)  
  
 La direttiva `#undef` causa la dimenticanza della definizione del preprocessore di un identificatore. Vedere [#undef direttiva](../preprocessor/hash-undef-directive-c-cpp.md) per ulteriori informazioni.  
  
 Se il nome della macro viene definita si verifica in *token-string* (anche in seguito a un altro espansione della macro), non è espanso.  
  
 Un secondo oggetto `#define` per una macro con lo stesso nome genera un avviso a meno che la seconda sequenza del token non sia identica alla prima.  
  
 **Sezione specifica Microsoft**  
  
 Microsoft C/C++ consente di ridefinire una macro se la nuova definizione è sintatticamente identica alla definizione originale. In altre parole, due definizioni possono avere nomi di parametri diversi. Questo comportamento è diverso da [!INCLUDE[vcpransi](../atl-mfc-shared/reference/includes/vcpransi_md.md)] C, che richiede che le due definizioni siano identiche a livello lessicale.  
  
 Ad esempio, le due macro seguenti sono identiche a eccezione dei nomi del parametro. [!INCLUDE[vcpransi](../atl-mfc-shared/reference/includes/vcpransi_md.md)] C non consente tale ridefinizione, ma Microsoft C/C++ viene compilata senza errori.  
  
```  
#define multiply( f1, f2 ) ( f1 * f2 )  
#define multiply( a1, a2 ) ( a1 * a2 )  
```  
  
 D'altro canto, le due macro seguenti non sono identiche e genereranno un avviso in Microsoft C/C++.  
  
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
  
 La prima istruzione definisce l'identificatore `WIDTH` come costante Integer 80 e definisce `LENGTH` in termini di `WIDTH` come costante Integer 10. Ogni occorrenza di `LENGTH` viene sostituita da (`WIDTH + 10`). Ogni occorrenza di `WIDTH + 10` viene a sua volta sostituita dall'espressione (`80 + 10`). Le parentesi intorno a `WIDTH + 10` sono importanti in quanto controllano l'interpretazione nelle istruzioni simili alle seguenti:  
  
```  
var = LENGTH * 20;  
```  
  
 Dopo la fase di pre-elaborazione l'istruzione diventa:  
  
```  
var = ( 80 + 10 ) * 20;  
```  
  
 che restituisce 1800. Senza parentesi, il risultato è:  
  
```  
var = 80 + 10 * 20;  
```  
  
 che restituisce 280.  
  
 **Sezione specifica Microsoft**  
  
 Definizione delle macro e costanti con il [/D](../build/reference/d-preprocessor-definitions.md) l'opzione del compilatore ha lo stesso effetto utilizzando un `#define` pre-elaborazione direttiva all'inizio del file. È possibile definire fino a 30 macro utilizzando l'opzione /D.  
  
 **Fine sezione specifica Microsoft**  
  
## <a name="see-also"></a>Vedere anche  
 [Direttive per il preprocessore](../preprocessor/preprocessor-directives.md)