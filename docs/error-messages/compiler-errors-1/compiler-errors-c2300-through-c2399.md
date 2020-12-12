---
description: 'Altre informazioni su: errori del compilatore C2300 tramite C2399'
title: Errori del compilatore da C2300 a C2399
ms.date: 04/21/2019
f1_keywords:
- C2303
- C2304
- C2305
- C2306
- C2314
- C2321
- C2323
- C2328
- C2329
- C2330
- C2331
- C2335
- C2336
- C2339
- C2340
- C2342
- C2343
- C2347
- C2354
- C2358
- C2359
- C2363
- C2366
- C2367
- C2398
- C2399
helpviewer_keywords:
- C2303
- C2304
- C2305
- C2306
- C2314
- C2321
- C2323
- C2328
- C2329
- C2330
- C2331
- C2335
- C2336
- C2339
- C2340
- C2342
- C2343
- C2347
- C2354
- C2358
- C2359
- C2363
- C2366
- C2367
- C2398
- C2399
ms.assetid: 07ca45b5-b2f0-4049-837b-40a7a3caed88
ms.openlocfilehash: 95763db7f8be0c0918d2f15f515f327325c386dc
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97318949"
---
# <a name="compiler-errors-c2300-through-c2399"></a>Errori del compilatore da C2300 a C2399

Negli articoli di questa sezione della documentazione viene illustrato un subset dei messaggi di errore generati dal compilatore.

[!INCLUDE[error-boilerplate](../../error-messages/includes/error-boilerplate.md)]

## <a name="error-messages"></a>Messaggi di errore

|Errore|Message|
|-----------|-------------|
|[Errore del compilatore C2300](compiler-error-c2300.md)|'*Class*': la classe non ha un distruttore denominato ' ~*Class*'|
|[Errore del compilatore C2301](compiler-error-c2301.md)|la parte sinistra di '->~*Identifier*' deve puntare a una classe, una struttura o un'Unione|
|[Errore del compilatore C2302](compiler-error-c2302.md)|il Left di '. ~*Identifier*' deve avere un tipo di classe/struct/Unione|
|Errore del compilatore C2303|Non è possibile usare la gestione delle eccezioni strutturata in una coroutine|
|Errore del compilatore C2304|'*keyword*' non può essere usato all'interno di un blocco catch|
|Errore del compilatore C2305|'*file*' non contiene informazioni di debug per questo modulo|
|Errore del compilatore C2306|'*file*' non contiene le informazioni di debug più recenti per questo modulo|
|[Errore del compilatore C2307](compiler-error-c2307.md)|Se la compilazione incrementale è abilitata, è necessario spostare la *direttiva* pragma all'esterno della funzione|
|[Errore del compilatore C2308](compiler-error-c2308.md)|concatenazione di stringhe non corrispondenti|
|[Errore del compilatore C2309](compiler-error-c2309.md)|prevista una dichiarazione di eccezione tra parentesi per il gestore catch|
|[Errore del compilatore C2310](compiler-error-c2310.md)|i gestori catch devono specificare un tipo|
|[Errore del compilatore C2311](compiler-error-c2311.md)|'*Type*': individuato da'.. .' *numero* di riga|
|[Errore del compilatore C2312](compiler-error-c2312.md)|'*tipo1*': individuato da'*tipo2*' nel *numero* di riga|
|[Errore del compilatore C2313](compiler-error-c2313.md)|'*tipo1*': individuato dal riferimento ('*tipo2*') al *numero* di riga|
|Errore del compilatore C2314|la parola chiave '*keyword1*' è deprecata: usare '*keyword2*'|
|[Errore del compilatore C2315](compiler-error-c2315.md)|'*tipo1*': riferimento individuato da'*tipo2*' nel *numero* di riga|
|[Errore del compilatore C2316](compiler-error-c2316.md)|'*Type*': non può essere intercettato come distruttore e/o il costruttore di copia non è accessibile o è stato eliminato|
|[Errore del compilatore C2317](compiler-error-c2317.md)|il blocco ' Try ' che inizia alla riga '*Number*' non ha gestori catch|
|[Errore del compilatore C2318](compiler-error-c2318.md)|nessun blocco try associato a questo gestore catch|
|[Errore del compilatore C2319](compiler-error-c2319.md)|'try/catch' deve essere seguito da un'istruzione composta. '{' mancante|
|[Errore del compilatore C2320](compiler-error-c2320.md)|previsto ':' per seguire l'identificatore di accesso '*specifier*'|
|Errore del compilatore C2321|'*Identifier*' è una parola chiave e non può essere usato in questo contesto|
|[Errore del compilatore C2322](compiler-error-c2322.md)|'*Identifier*': l'indirizzo di dllimport '*Identifier*' non è statico|
|Errore del compilatore C2323|'*Identifier*': le funzioni New o Delete dell'operatore non membro non possono essere dichiarate statiche o in uno spazio dei nomi diverso dallo spazio dei nomi globale|
|[Errore del compilatore C2324](compiler-error-c2324.md)|'*Identifier*': imprevisto a destra di ':: ~'|
|[Errore del compilatore C2325](compiler-error-c2325.md)|'*tipo1*': tipo imprevisto a destra di '->~': previsto '*tipo2*'|
|[Errore del compilatore C2326](compiler-error-c2326.md)|'*dichiaratore*': la funzione non può accedere a'*Identifier*'|
|[Errore del compilatore C2327](compiler-error-c2327.md)|'*Identifier*': non è un nome di tipo, statico o enumeratore|
|Errore del compilatore C2328|'*keyword*': la parola chiave non è ancora supportata|
|Errore del compilatore C2329|'*Identifier*': non __ptr64 disponibile per i puntatori alle funzioni|
|Errore del compilatore C2330|' implementation_key ()' è valido solo in un'area delimitata da #pragma start_map_region/stop_map_region|
|Errore del compilatore C2331|l'accesso a'*Identifier*' è ora definito come '*accessibility1*', in precedenza è stato definito come '*accessibility2*'|
|[Errore del compilatore C2332](compiler-error-c2332.md)|'*typedef*': nome di tag mancante|
|[Errore del compilatore C2333](compiler-error-c2333.md)|'*Function*': errore nella dichiarazione di funzione. il corpo della funzione verrà ignorato|
|[Errore del compilatore C2334](compiler-error-c2334.md)|token imprevisti prima di '*token*'; il corpo della funzione apparente verrà ignorato|
|Errore del compilatore C2335|'*Identifier*': Impossibile introdurre un tipo in un elenco di parametri di funzione|
|Errore del compilatore C2336|'*Type*': tipo non valido|
|[Errore del compilatore C2337](compiler-error-c2337.md)|'*attribute*': attributo non trovato|
|[Errore del compilatore C2338](compiler-error-c2338.md)|*(messaggio di errore dal provider esterno)*|
|Errore del compilatore C2339|'*Identifier*': tipo non valido nell'IDL incorporato|
|Errore del compilatore C2340|'*Identifier*':' static ' può essere utilizzato solo all'interno di una definizione di classe|
|[Errore del compilatore C2341](compiler-error-c2341.md)|'*Section*': il segmento deve essere definito utilizzando #pragma data_seg, code_seg o sezione prima dell'utilizzo|
|Errore del compilatore C2342|errore di sintassi: qualificatori di tipo in conflitto|
|Errore del compilatore C2343|'*Section*': attributi di sezione in conflitto|
|[Errore del compilatore C2344](compiler-error-c2344.md)|Allinea (*numero*): l'allineamento deve essere una potenza di due|
|[Errore del compilatore C2345](compiler-error-c2345.md)|Allinea (*numero*): valore di allineamento non valido|
|[Errore del compilatore C2346](compiler-error-c2346.md)|'*Function*' non può essere compilato come nativo:'*spiegazione*'|
|Errore del compilatore C2347|Obsoleta.|
|[Errore del compilatore C2348](compiler-error-c2348.md)|'*Type*': non è un'aggregazione di tipo C e non può essere esportata in un IDL incorporato|
|[Errore del compilatore C2349](compiler-error-c2349.md)|'*Function*' non può essere compilato come gestito:'*spiegazione*'; USA #pragma non gestito|
|[Errore del compilatore C2350](compiler-error-c2350.md)|'*Identifier*' non è un membro statico|
|[Errore del compilatore C2351](compiler-error-c2351.md)|sintassi obsoleta di inizializzazione del costruttore C++|
|[Errore del compilatore C2352](compiler-error-c2352.md)|'*Identifier*': chiamata non valida di funzione membro non statica|
|[Errore del compilatore C2353](compiler-error-c2353.md)|la specifica dell'eccezione non è consentita|
|Errore del compilatore C2354|Obsoleta.|
|[Errore del compilatore C2355](compiler-error-c2355.md)|' This ': è possibile fare riferimento solo all'interno di funzioni membro non statiche o inizializzatori di membri dati non statici|
|[Errore del compilatore C2356](compiler-error-c2356.md)|il segmento di inizializzazione non deve cambiare durante l'unità di conversione|
|[Errore del compilatore C2357](compiler-error-c2357.md)|'*Identifier*': deve essere una funzione di tipo '*Type*'|
|Errore del compilatore C2358|'*Identifier*': non è possibile definire una proprietà statica al di fuori della definizione di una classe|
|Errore del compilatore C2359|Obsoleta.|
|[Errore del compilatore C2360](compiler-error-c2360.md)|l'inizializzazione di '*Identifier*' è stata ignorata dall'etichetta ' case '|
|[Errore del compilatore C2361](compiler-error-c2361.md)|l'inizializzazione di '*Identifier*' è stata ignorata dall'etichetta ' default '|
|[Errore del compilatore C2362](compiler-error-c2362.md)|l'inizializzazione di '*Identifier*' è stata ignorata da' GOTO *Label*'|
|Errore del compilatore C2363|la funzione di limite numerico intrinseco del compilatore richiede un argomento letterale stringa|
|[Errore del compilatore C2364](compiler-error-c2364.md)|'*Type*': tipo non valido per l'attributo personalizzato|
|[Errore del compilatore C2365](compiler-error-c2365.md)|'*member1*': ridefinizione. la definizione precedente è'*membro2*'|
|Errore del compilatore C2366|'*Identifier*': ridefinizione. identificatori di implementation_key diversi|
|Errore del compilatore C2367|Obsoleta.|
|[Errore del compilatore C2368](compiler-error-c2368.md)|'*Identifier*': ridefinizione. identificatori di allocazione diversi|
|[Errore del compilatore C2369](compiler-error-c2369.md)|'*Identifier*': ridefinizione. indici diversi|
|[Errore del compilatore C2370](compiler-error-c2370.md)|'*Identifier*': ridefinizione. classe di archiviazione diversa|
|[Errore del compilatore C2371](compiler-error-c2371.md)|'*Identifier*': ridefinizione. tipi di base diversi|
|[Errore del compilatore C2372](compiler-error-c2372.md)|'*Identifier*': ridefinizione. tipi diversi di riferimento indiretto|
|[Errore del compilatore C2373](compiler-error-c2373.md)|'*Identifier*': ridefinizione. modificatori di tipi diversi|
|[Errore del compilatore C2374](compiler-error-c2374.md)|'*Identifier*': ridefinizione. inizializzazione multipla|
|[Errore del compilatore C2375](compiler-error-c2375.md)|'*Identifier*': ridefinizione. collegamento diverso|
|[Errore del compilatore C2376](compiler-error-c2376.md)|'*Identifier*': ridefinizione. allocazione basata su diverse|
|[Errore del compilatore C2377](compiler-error-c2377.md)|'*Identifier*': ridefinizione. non è possibile eseguire l'overload di typedef con altri simboli|
|[Errore del compilatore C2378](compiler-error-c2378.md)|'*Identifier*': ridefinizione. non è possibile eseguire l'overload del simbolo con un typedef|
|[Errore del compilatore C2379](compiler-error-c2379.md)|il *numero* del parametro formale ha un tipo diverso quando viene promosso|
|[Errore del compilatore C2380](compiler-error-c2380.md)|i tipi che precedono '*Identifier*' (costruttore con tipo restituito o ridefinizione non valida del nome di classe corrente?)|
|[Errore del compilatore C2381](compiler-error-c2381.md)|'*Identifier*': ridefinizione. ' __declspec (noreturn)' o ' [[noreturn]]' differisce|
|[Errore del compilatore C2382](compiler-error-c2382.md)|'*Identifier*': ridefinizione. specifiche di eccezione diverse|
|[Errore del compilatore C2383](compiler-error-c2383.md)|'*Identifier*': gli argomenti predefiniti non sono consentiti su questo simbolo|
|[Errore del compilatore C2384](compiler-error-c2384.md)|'*member*': non è possibile applicare thread_local o __declspec (thread) a un membro di una classe gestita/WinRT|
|[Errore del compilatore C2385](compiler-error-c2385.md)|accesso ambiguo di '*member*'|
|[Errore del compilatore C2386](compiler-error-c2386.md)|'*Identifier*': esiste già un simbolo con questo nome nell'ambito corrente|
|[Errore del compilatore C2387](compiler-error-c2387.md)|'*Identifier*': classe di base ambigua|
|[Errore del compilatore C2388](compiler-error-c2388.md)|'*Identifier*': non è possibile dichiarare un simbolo sia con __declspec (AppDomain) che con __declspec (Process)|
|[Errore del compilatore C2389](compiler-error-c2389.md)|'*operator*': operando ' nullptr ' non valido|
|[Errore del compilatore C2390](compiler-error-c2390.md)|'*Identifier*': classe di archiviazione '*specifier*' non corretta|
|[Errore del compilatore C2391](compiler-error-c2391.md)|'*Identifier*': non è possibile usare ' Friend ' durante la definizione del tipo|
|[Errore del compilatore C2392](compiler-error-c2392.md)|'*member1*': i tipi restituiti di covariante non sono supportati nei tipi gestiti/WinRT; in caso contrario, è possibile eseguire l'override di '*membro2*'|
|[Errore del compilatore C2393](compiler-error-c2393.md)|'*Symbol*': non è possibile allocare il simbolo per dominio di applicazione nel segmento '*Segment*'|
|[Errore del compilatore C2394](compiler-error-c2394.md)|'*Type*: *: operator Operator ':* operatore CLR/WinRT non valido. Almeno un parametro deve essere dei tipi seguenti:' t ^',' t ^%',' t ^&', dove T ='*Type*'|
|[Errore del compilatore C2395](compiler-error-c2395.md)|'*Type*: *: operator Operator ':* operatore CLR/WinRT non valido. Almeno un parametro deve essere dei tipi seguenti:' T',' t%',' t&',' t ^',' t ^%',' t ^&', dove T ='*Type*'|
|[Errore del compilatore C2396](compiler-error-c2396.md)|'*tipo1*:: operator *tipo2*': funzione di conversione definita dall'utente CLR/WinRT non valida. Deve eseguire la conversione o la conversione in:' t ^',' t ^%',' t ^&', dove T ='*tipo1*'|
|[Errore del compilatore C2397](compiler-error-c2397.md)|la conversione da'*tipo1*' a'*tipo2*' richiede una conversione verso un tipo di caratteri più piccolo|
|Errore del compilatore C2398|Elemento '*Number*': la conversione da'*tipo1*' a'*tipo2*' richiede una conversione verso un tipo di caratteri più piccolo|
|Errore del compilatore C2399|Obsoleta.|

## <a name="see-also"></a>Vedi anche

[Errori e avvisi degli strumenti di compilazione e compilatore C/C++](../compiler-errors-1/c-cpp-build-errors.md) \
[Errori del compilatore da C2000 a C3999](../compiler-errors-1/compiler-errors-c2000-c3999.md)
