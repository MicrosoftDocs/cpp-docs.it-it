---
title: Array e WriteOnlyArray (C + + CX) | Documenti Microsoft
ms.custom: ''
ms.date: 01/22/2017
ms.technology: cpp-windows
ms.topic: language-reference
ms.assetid: ef7cc5f9-cae6-4636-8220-f789e5b6aea4
author: ghogen
ms.author: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 47c26ef4058cc3116d964740a93f7395c300b92b
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33089392"
---
# <a name="array-and-writeonlyarray-ccx"></a>Array e WriteOnlyArray (C++/CX)
È possibile usare liberamente matrici di tipo C regolari o [std:: Array](../standard-library/array-class-stl.md) in C + + programma CX (sebbene [std:: Vector](../standard-library/vector-class.md) è spesso una scelta migliore), ma in qualsiasi API pubblicata nei metadati, è necessario convertire una matrice di tipo C o vettoriale per una [platform:: Array](../cppcx/platform-array-class.md) o [platform:: writeonlyarray](../cppcx/platform-writeonlyarray-class.md) tipo a seconda della modalità di utilizzo. Il tipo [Platform::Array](../cppcx/platform-array-class.md) non è altrettanto efficace o potente di [std::vector](../standard-library/vector-class.md). Pertanto, come regola generale, se ne sconsiglia l'utilizzo in codice interno che esegue una grande quantità di operazioni sugli elementi di matrice.  
  
 I seguenti tipi di matrice possono essere passati attraverso l'ABI:  
  
1.  const Platform::Array^  
  
2.  Platform::Array^*  
  
3.  Platform::WriteOnlyArray  
  
4.  valore restituito di Platform::Array^  
  
 Questi tipi di matrice consentono di implementare i tre tipi di modelli di matrice definiti da Windows Runtime.  
  
 PassArray  
 Utilizzato quando il chiamante passa una matrice a un metodo. Il tipo di parametro di input C++ è `const` [platform:: Array](../cppcx/platform-array-class.md)\<T >.  
  
 FillArray  
 Utilizzato quando il chiamante passa una matrice per il metodo da riempire. Il tipo di parametro di input C++ è [platform:: writeonlyarray](../cppcx/platform-writeonlyarray-class.md)\<T >.  
  
 ReceiveArray  
 Utilizzato quando il chiamante riceve una matrice che il metodo alloca. In C++/CX è possibile restituire la matrice nel valore restituito come Array^ oppure come parametro out come tipo Array^*.  
  
## <a name="passarray-pattern"></a>Modello PassArray  
 Quando il codice client passa una matrice a un metodo C++ e il metodo non la modifica, la matrice viene accettata come const Array^. A livello di interfaccia binaria (ABI) dell'applicazione di Windows Runtime, questo è noto come PassArray. Nell'esempio riportato di seguito viene illustrato come passare una matrice allocata in JavaScript a una funzione di C++ che la legge.  
  
 [!code-javascript[cx_arrays#101](../cppcx/codesnippet/JavaScript/array-and-writeonlyarray-c-_1.js)]  
  
 Nel frammento riportato di seguito viene mostrato il metodo C++.  
  
 [!code-cpp[cx_arrays#01](../cppcx/codesnippet/CPP/js-array/class1.cpp#01)]  
  
## <a name="receivearray-pattern"></a>Modello ReceiveArray  
 Nel modello ReceiveArray, il codice client dichiara una matrice e la passa a un metodo che ne alloca la memoria e la inizializza. Il tipo di parametro di input di C++ è un puntatore a handle a oggetto: `Array<T>^*`. Nell'esempio riportato di seguito viene illustrato come dichiarare un oggetto matrice in JavaScript e passarlo a una funzione di C++ che alloca la memoria, inizializza gli elementi e lo restituisce al linguaggio JavaScript. JavaScript tratta la matrice allocata come un valore restituito, mentre la funzione di C++ la tratta come un parametro out.  
  
 [!code-javascript[cx_arrays#102](../cppcx/codesnippet/JavaScript/array-and-writeonlyarray-c-_3.js)]  
  
 Nel frammento riportato di seguito vengono illustrati due modi per implementare il metodo C++:  
  
 [!code-cpp[cx_arrays#02](../cppcx/codesnippet/CPP/js-array/class1.cpp#02)]  
  
## <a name="fill-arrays"></a>Matrici di riempimento  
 Per allocare una matrice nel chiamante e inizializzarla o modificarla nel destinatario della chiamata, utilizza `WriteOnlyArray`. Nell'esempio riportato di seguito viene illustrato come implementare una funzione di C++ che utilizza l'oggetto `WriteOnlyArray` e lo chiama da JavaScript.  
  
 [!code-javascript[cx_arrays#103](../cppcx/codesnippet/JavaScript/array-and-writeonlyarray-c-_5.js)]  
  
 Nel frammento riportato di seguito viene mostrato come implementare il metodo C++:  
  
 [!code-cpp[cx_arrays#03](../cppcx/codesnippet/CPP/js-array/class1.cpp#03)]  
  
## <a name="array-conversions"></a>Conversioni di matrice  
 Questo esempio mostra come usare un elemento [Platform::Array](../cppcx/platform-array-class.md) per costruire altri tipi di raccolte:  
  
 [!code-cpp[cx_arrays#05](../cppcx/codesnippet/CPP/js-array/class1.cpp#05)]  
  
 L'esempio successivo mostra come costruire un elemento [Platform::Array](../cppcx/platform-array-class.md) da una matrice di tipo C e come restituirlo da un metodo pubblico.  
  
 [!code-cpp[cx_arrays#06](../cppcx/codesnippet/CPP/js-array/class1.cpp#06)]  
  
## <a name="jagged-arrays"></a>Matrici di matrici  
 Il sistema di tipi di Windows Runtime non supporta il concetto di matrici di matrici, pertanto non puoi passare `IVector<Platform::Array<T>>` come valore restituito o parametro di metodo in un metodo pubblico. Per passare una matrice di matrici o una sequenza di sequenze attraverso l'interfaccia applicativa binaria (ABI), usa `IVector<IVector<T>^>`.  
  
## <a name="use-arrayreference-to-avoid-copying-data"></a>Utilizza ArrayReference per evitare di copiare i dati  
 In alcuni scenari in cui i dati vengono passati attraverso l'interfaccia applicativa binaria in [Platform::Array](../cppcx/platform-array-class.md)e desideri elaborare i dati in una matrice di tipo C per una maggiore efficienza, puoi usare [Platform::ArrayReference](../cppcx/platform-arrayreference-class.md) per evitare l'operazione di copia aggiuntiva. Quando passi [Platform::ArrayReference](../cppcx/platform-arrayreference-class.md) come argomento in un parametro che accetta `Platform::Array`, `ArrayReference` archivierà i dati direttamente in una matrice di tipo C specificata. Tieni presente che `ArrayReference` non ha alcun blocco sui dati di origine. Pertanto, se tali dati vengono modificati o eliminati in un altro thread prima del completamento della chiamata, i risultati saranno non definiti.  
  
 Il frammento di codice seguente mostra come copiare i risultati di un'operazione [DataReader](http://msdn.microsoft.com/library/windows/apps/windows.storage.streams.datareader.aspx) in un oggetto `Platform::Array` (modello comune) e come sostituire `ArrayReference` per copiare i dati direttamente in una matrice di tipo C:  
  
 [!code-cpp[cx_arrays#07](../cppcx/codesnippet/CPP/js-array/class1.h#07)]  
  
## <a name="avoid-exposing-an-array-as-a-property"></a>Evitare di esporre una matrice come proprietà  
 In generale, evita di esporre un tipo `Platform::Array` come proprietà in una classe di riferimento poiché l'intera matrice viene restituita anche quando il codice client tenta semplicemente di accedere a un singolo elemento. Per esporre un contenitore di sequenza come proprietà in una classe di riferimento pubblica, [Windows::Foundation::IVector](http://msdn.microsoft.com/library/windows/apps/br206631.aspx) rappresenta una scelta migliore. Nelle API private o interne (non pubblicate nei metadati), considera l'utilizzo di un contenitore C++ standard come [std::vector](../standard-library/vector-class.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Sistema di tipi](../cppcx/type-system-c-cx.md)   
 [Riferimenti al linguaggio di Visual C++](../cppcx/visual-c-language-reference-c-cx.md)   
 [Riferimento a spazi dei nomi](../cppcx/namespaces-reference-c-cx.md)