---
title: partial (C++/CLI e C++/CX)
ms.date: 10/12/2018
ms.topic: reference
f1_keywords:
- partial_CPP
helpviewer_keywords:
- partial
- C++/CX, partial
ms.assetid: 43adf1f5-10c5-44aa-a66f-7507e2bdabf8
ms.openlocfilehash: ad8faa08a2c85e777cbc8721e5842e708b9e6cb1
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80181850"
---
# <a name="partial--ccli-and-ccx"></a>partial (C++/CLI e C++/CX)

La parola chiave **partial** consente di creare parti diverse della stessa classe di riferimento in modo indipendente e in file diversi.

## <a name="all-runtimes"></a>Tutti i runtime

Questa funzionalità del linguaggio si applica solo a Windows Runtime.

## <a name="windows-runtime"></a>Windows Runtime

Per una classe di riferimento che ha due definizioni parziali, la parola chiave **partial** viene applicata alla prima occorrenza della definizione e questa operazione viene in genere eseguita dal codice generato automaticamente, in modo che una persona che scrive codice non usi la parola chiave molto spesso. Per tutte le definizioni parziali successive della classe, omettere il modificatore **partial** dalla parola chiave *class-key* e dall'identificatore di classe. Quando il compilatore rileva una classe di riferimento e un identificatore di classe definiti in precedenza ma non la parola chiave **partial**, combina internamente tutte le parti della definizione della classe di riferimento in una definizione.

### <a name="syntax"></a>Sintassi

```cpp
partial class-key identifier {
   /* The first part of the partial class definition.
      This is typically auto-generated */
}
// ...
class-key identifier {
   /* The subsequent part(s) of the class definition. The same
      identifier is specified, but the "partial" keyword is omitted. */
}
```

### <a name="parameters"></a>Parametri

*class-key*<br/>
Parola chiave che dichiara una classe o uno struct supportato da Windows Runtime. Può trattarsi di una **classe di riferimento**, una **classe di valori**, uno **struct ref** o uno **struct di valori**.

*identifier*<br/>
Nome del tipo definito.

### <a name="remarks"></a>Osservazioni

Una classe parziale supporta scenari in cui si modifica una parte di una definizione di classe in un file e il software che genera codice automaticamente, ad esempio la finestra di progettazione XAML, modifica il codice nella stessa classe in un altro file. Usando una classe parziale, è possibile impedire al generatore di codice automatico di sovrascrivere il codice. In un progetto di Visual Studio il modificatore **partial** viene applicato automaticamente al file generato.

Contenuto: con due eccezioni, una definizione di classe parziale può contenere qualsiasi elemento che la definizione di classe completa potrebbe contenere se la parola chiave **partial** è stata omessa. Non è tuttavia possibile specificare l'accessibilità della classe (ad esempio `public partial class X { ... };`) o un oggetto **declspec**.

Gli identificatori di accesso usati in una definizione di classe parziale per *identifier* non influiscono sull'accessibilità predefinita in una definizione di classe parziale o completa successiva per *identifier*. Sono consentite le definizioni inline di membri dati statici.

Dichiarazione: una definizione parziale di un *identificatore* di classe introduce solo l' *identificatore*del nome, ma l' *identificatore* non può essere usato in un modo che richiede una definizione di classe. Il nome *identifier* non può essere usato per conoscere la dimensione di *identifier* o per usare una classe di base o un membro di *identifier* fino a quando il compilatore non raggiunge la definizione completa di *identifier*.

Numero e ordinamento: possono essere presenti zero o più definizioni di classe parziali per l' *identificatore*. Ogni definizione di classe parziale di *identifier* deve precedere lessicalmente la definizione completa di *identifier* (se la definizione completa è presente; in caso contrario, la classe non può essere usata se non come dichiarazione con prototipo), ma non è necessario che preceda le dichiarazioni con prototipo di *identifier*. Tutti gli elementi class-key devono corrispondere.

Definizione completa: al punto della definizione completa dell' *identificatore*di classe, il comportamento è identico a quello che si verifica se la definizione dell' *identificatore* avesse dichiarato tutte le classi di base, i membri e così via nell'ordine in cui sono stati rilevati e definiti nelle classi parziali.

Modelli: una classe parziale non può essere un modello.

Generics: una classe parziale può essere generica se la definizione completa potrebbe essere generica. Ogni classe parziale e completa deve tuttavia avere esattamente gli stessi parametri generici, compresi i nomi di parametri formali.

Per altre informazioni su come usare la parola chiave **partial**, vedere [Classi parziali (C++/CX)](https://go.microsoft.com/fwlink/p/?LinkId=249023).

### <a name="requirements"></a>Requisiti

Opzione del compilatore: `/ZW`

## <a name="common-language-runtime"></a>Common Language Runtime

Questa funzionalità del linguaggio non si applica a Common Language Runtime.

## <a name="see-also"></a>Vedere anche

[Classi parziali (C++/CX)](https://go.microsoft.com/fwlink/p/?LinkId=249023)
