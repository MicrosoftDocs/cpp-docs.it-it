---
title: Stringhe (C + + CX) | Documenti Microsoft
ms.custom: 
ms.date: 01/22/2017
ms.technology: cpp-windows
ms.reviewer: 
ms.suite: 
ms.tgt_pltfrm: 
ms.topic: language-reference
ms.assetid: 5b34e1df-7c2b-4269-aba8-b767d36c49d9
caps.latest.revision: 
author: ghogen
ms.author: ghogen
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: e70f5fc5478d0950a7287da690822046621e517b
ms.sourcegitcommit: 6002df0ac79bde5d5cab7bbeb9d8e0ef9920da4a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/14/2018
---
# <a name="strings-ccx"></a>Stringhe (C++/CX)
Testo in Windows Runtime è rappresentato in C + + CX dal [classe platform:: String](../cppcx/platform-string-class.md). Utilizzare il `Platform::String Class` quando si passano stringhe avanti e indietro ai metodi nelle classi di Windows Runtime o quando si interagisce con altri componenti di Windows Runtime attraverso il limite dell'interfaccia binaria (ABI). L'oggetto `Platform::String Class` fornisce i metodi per numerose operazioni di stringa comuni ma non è progettato per essere una classe String completa. Nel modulo C++ utilizza i tipi di stringa C++ standard quali [wstring](../standard-library/basic-string-class.md) per l'elaborazione dei testi importanti e converti il risultato finale in [Platform::String^](../cppcx/platform-string-class.md) prima di passarlo a o da un'interfaccia pubblica. La conversione tra `wstring` o `wchar_t*` e `Platform::String`è un'operazione semplice ed efficace.  
  
 **Passaggio rapido**  
  
 In alcuni casi, il compilatore verifica di poter creare un oggetto `Platform::String` o passare una classe `String` a una funzione in modo sicuro senza copiare i dati sottostanti in formato stringa. Tali operazioni sono note come *passaggi rapidi* e si svolgono in modo trasparente.  
  
## <a name="string-construction"></a>Costruzione di stringa  
 Il valore di un oggetto `String` è una sequenza (in sola lettura) non modificabile di caratteri `char16` (Unicode a 16 bit). Poiché un oggetto `String` non è modificabile, l'assegnazione di un nuovo valore letterale stringa a una variabile `String` sostituisce effettivamente l'oggetto `String` originale con un nuovo oggetto `String` . Le operazioni di concatenazione implicano la distruzione dell'oggetto `String` originale e la creazione di uno nuovo.  
  
 **Valori letterali**  
  
 Un *carattere letterale* è un carattere racchiuso tra virgolette singole e una *stringa letterale* è una sequenza di caratteri racchiusa tra virgolette doppie. Se utilizzi un valore letterale per inizializzare una variabile String^, a livello di compilatore viene supposto che il valore letterale sia costituito da caratteri `char16` . Ciò significa che non è necessario anteporre al valore letterale il modificatore di stringa "L" o racchiudere il valore letterale in una macro **_T()** o **TEXT()** . Per ulteriori informazioni sul supporto di C++ per Unicode, vedi [Unicode Programming Summary](../text/unicode-programming-summary.md).  
  
 Nell'esempio riportato di seguito sono mostrati vari modi per costruire oggetti `String` .  
  
 [!code-cpp[cx_strings#01](../cppcx/codesnippet/CPP/cppcx_strings/class1.cpp#01)]  
  
## <a name="string-handling-operations"></a>Operazioni di gestione delle stringhe  
 La classe `String` fornisce i metodi e gli operatori per la concatenazione, il confronto di stringhe e altre operazioni di base sulle stringhe. Per eseguire modifiche di stringa più estese, utilizza la funzione membro `String::Data()` per recuperare il valore dell'oggetto `String^` come `const wchar_t*`. Utilizza quindi tale valore per inizializzare un oggetto `std::wstring`, che fornisce funzioni avanzate di gestione delle stringhe.  
  
 [!code-cpp[cx_strings#03](../cppcx/codesnippet/CPP/cppcx_strings/class1.cpp#03)]  
  
## <a name="string-conversions"></a>Conversioni di stringhe  
 `Platform::String` può contenere solo caratteri `char16` o il carattere `NULL` . Se l'applicazione deve utilizzare caratteri a 8 bit, utilizzare il [String:: data](../cppcx/platform-string-class.md#data) per estrarre il testo come una `const wchar_t*`. Puoi quindi utilizzare le funzioni di Windows o le funzioni di libreria standard appropriate per eseguire operazioni sui dati e convertirli di nuovo in `wchar_t*` o [wstring](../standard-library/basic-string-class.md)da utilizzare per costruire un nuovo oggetto `Platform::String`.  
  
 Nel frammento di codice riportato di seguito viene illustrato come convertire una variabile `String^` in o da una variabile `wstring` . Per ulteriori informazioni sulla gestione della stringa utilizzata in questo esempio, vedi [basic_string::replace](../standard-library/basic-string-class.md#replace).  
  
 [!code-cpp[cx_strings#04](../cppcx/codesnippet/CPP/cppcx_strings/class1.cpp#04)]  
  
## <a name="string-length-and-embedded-null-values"></a>Valori di lunghezza della stringa e valore NULL incorporato  
 Il [String:: Length](../cppcx/platform-string-class.md#length) restituisce il numero di caratteri nella stringa, non il numero di byte. Il carattere di terminazione NULL non viene contato a meno che tu non lo specifichi quando utilizzi la semantica dello stack per costruire una stringa.  
  
 `Platform::String` può contenere valori NULL, ma solo quando NULL è un risultato di un'operazione di concatenazione. I caratteri NULL incorporati non sono supportati nei valori letterali di stringa; pertanto, non li puoi utilizzare in quel modo per inizializzare un oggetto `Platform::String`. I valori NULL incorporati in `Platform::String` vengono ignorati nella visualizzazione della stringa, ad esempio, quando la stringa è assegnata a una proprietà `TextBlock::Text` . I caratteri NULL incorporati vengono rimossi quando il valore stringa viene restituito dalla proprietà `Data` .  
  
## <a name="stringreference"></a>StringReference  
 In alcuni casi il codice (a) riceve un std:: wstring, o stringa wchar_t o L"" stringa letterale e semplicemente lo passa a un altro metodo che accetta String ^ come parametro di input. Finché lo stesso buffer di stringa originale rimane valido e non viene modificato prima della restituzione della funzione, puoi convertire la stringa o il valore letterale stringa `wchar_t*` in un valore [Platform::StringReference](../cppcx/platform-stringreference-class.md)e passarlo al posto di `Platform::String^`. Ciò è consentito perché `StringReference` dispone di una conversione definita dall'utente in `Platform::String^`. Utilizzando `StringReference` puoi evitare di eseguire una copia aggiuntiva dei dati di tipo stringa. Nei cicli in cui passi un elevato numero di stringhe, o quando passi di dimensioni considerevoli, puoi ottenere un miglioramento significativo delle prestazioni utilizzando `StringReference`. Poiché tuttavia `StringReference` utilizza essenzialmente il buffer di stringa originale, devi prestare particolare attenzione per evitare il danneggiamento della memoria. Evita di passare `StringReference` a un metodo asincrono a meno di avere la certezza che la stringa originale sia nell'ambito quando viene restituito il metodo. Un parametro String^ inizializzato da StringReference forza un'allocazione e una copia dei dati di tipo stringa se si verifica una seconda operazione di assegnazione. In questo caso, perderai il vantaggio in termini di prestazioni di `StringReference`.  
  
 Tieni presente che `StringReference` è un tipo di classe C++ standard, non una classe di riferimento, quindi non puoi usarla nell'interfaccia pubblica delle classi di riferimento che definisci.  
  
 L'esempio seguente mostra come usare StringReference:  
  
```  
void GetDecodedStrings(std::vector<std::wstring> strings)  
{  
    using namespace Windows::Security::Cryptography;  
    using namespace Windows::Storage::Streams;  
  
    for (auto&& s : strings)  
    {  
        // Method signature is IBuffer^ CryptographicBuffer::DecodeFromBase64String (Platform::String^)  
        // Call using StringReference:  
        IBuffer^ buffer = CryptographicBuffer::DecodeFromBase64String(StringReference(s.c_str()));  
  
        //...do something with buffer  
    }  
}  
```  
  
## <a name="see-also"></a>Vedere anche  
 [Tipi incorporati](http://msdn.microsoft.com/en-us/acc196fd-09da-4882-b554-6c94685ec75f)