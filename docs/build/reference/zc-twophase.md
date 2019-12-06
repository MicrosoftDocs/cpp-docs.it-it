---
title: /Zc:twoPhase- (Disabilita la ricerca del nome in due fasi)
description: 'Viene illustrato il modo in cui/Zc: twoPhase Disabilita la ricerca del nome in due fasi quando si specifica/permissive-.'
ms.date: 12/03/2019
f1_keywords:
- twoPhase
- /Zc:twoPhase
- VC.Project.VCCLCompilerTool.EnforceTypeConversionRules
helpviewer_keywords:
- twoPhase
- disable two-phase name lookup
- /Zc:twoPhase
ms.openlocfilehash: a2ede9f0875bf718d63361201cf8923666078f7a
ms.sourcegitcommit: a6d63c07ab9ec251c48bc003ab2933cf01263f19
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/05/2019
ms.locfileid: "74856956"
---
# <a name="zctwophase--disable-two-phase-name-lookup"></a>/Zc:twoPhase- (Disabilita la ricerca del nome in due fasi)

L'opzione **/Zc: twoPhase-** in **/permissive-** indica al compilatore di usare il comportamento del compilatore Microsoft C++ originale, non conforme, per analizzare e creare istanze di modelli di classe e di funzioni.

## <a name="syntax"></a>Sintassi

> **/Zc:twoPhase-**

## <a name="remarks"></a>Note

Visual Studio 2017 versione 15,3 e successive: in [/permissive-](permissive-standards-conformance.md), il compilatore usa la ricerca del nome in due fasi per la risoluzione dei nomi di modello. Se si specifica anche **/Zc: twoPhase**, il compilatore ripristina il modello di classe non conforme precedente e il comportamento di sostituzione e risoluzione del nome del modello di funzione. Quando **/permissive-** non è specificato, il comportamento non conforme è l'impostazione predefinita.

I file di intestazione Windows SDK nella versione 10.0.15063.0 (Creators Update o RS2) e versioni precedenti non funzionano in modalità di conformità. **/Zc: twoPhase-** è necessario per compilare il codice per le versioni dell'SDK quando si usa **/permissive-** . Le versioni del Windows SDK a partire dalla versione 10.0.15254.0 (Fall Creators Update o RS3) funzionano correttamente in modalità di conformità. Non richiedono l'opzione **/Zc: twoPhase-** .

Usare **/Zc: twoPhase-** se il codice richiede che il comportamento precedente venga compilato correttamente. È consigliabile aggiornare il codice per conformità allo standard.

### <a name="compiler-behavior-under-zctwophase-"></a>Comportamento del compilatore in/Zc: twoPhase-

Per impostazione predefinita, o in Visual Studio 2017 versione 15,3 e successive quando si specificano sia **/permissive-** che **/Zc: twoPhase-** , il compilatore usa questo comportamento:

- Analizza solo la dichiarazione del modello, l'intestazione della classe e l'elenco di classi di base. Il corpo del modello viene acquisito come un flusso di token. Non viene analizzato alcun corpo di funzione, inizializzatori, argomenti predefiniti o argomenti noexcept. Il modello di classe è pseudo-istanza di un tipo provvisorio per convalidare la correttezza delle dichiarazioni nel modello di classe. Considerare questo modello di classe:

   ```cpp
   template <typename T> class Derived : public Base<T> { ... }
   ```

   La dichiarazione di modello, la `template <typename T>`, il `class Derived`Head della classe e l'elenco di classi base `public Base<T>` vengono analizzati, ma il corpo del modello viene acquisito come un flusso di token.

- Quando si analizza un modello di funzione, il compilatore analizza solo la firma della funzione. Il corpo della funzione non viene mai analizzato. Viene invece acquisito come un flusso di token.

Di conseguenza, se il corpo del modello presenta errori di sintassi, ma non viene mai creata un'istanza del modello, il compilatore non esegue la diagnosi degli errori.

Un altro effetto di questo comportamento è la risoluzione dell'overload. Il comportamento non standard si verifica a causa del modo in cui il flusso del token viene espanso nel sito di creazione dell'istanza. I simboli che non sono visibili nella dichiarazione del modello possono essere visibili nel punto di creazione dell'istanza. Ciò significa che possono partecipare alla risoluzione dell'overload. È possibile trovare il comportamento di modifica dei modelli in base al codice non visibile nella definizione del modello, contrariamente allo standard.

Si consideri, ad esempio, il seguente codice:

```cpp
// zctwophase.cpp
// To test options, compile by using
// cl /EHsc /nologo /W4 zctwophase.cpp
// cl /EHsc /nologo /W4 /permissive- zctwophase.cpp
// cl /EHsc /nologo /W4 /permissive- /Zc:twoPhase- zctwophase.cpp

#include <cstdio>

void func(long) { std::puts("Standard two-phase") ;}

template<typename T> void g(T x)
{
    func(0);
}

void func(int) { std::puts("Microsoft one-phase"); }

int main()
{
    g(6174);
}
```

Di seguito è riportato l'output quando si usano la modalità predefinita, la modalità di conformità e la modalità di conformità con **/Zc: twoPhase-** opzioni del compilatore:

```cmd
C:\Temp>cl /EHsc /nologo /W4 zctwophase.cpp && zctwophase
zctwophase.cpp
Microsoft one-phase

C:\Temp>cl /EHsc /nologo /W4 /permissive- zctwophase.cpp && zctwophase
zctwophase.cpp
Standard two-phase

C:\Temp>cl /EHsc /nologo /W4 /permissive- /Zc:twoPhase- zctwophase.cpp && zctwophase
zctwophase.cpp
Microsoft one-phase
```

Quando viene compilato in modalità di conformità in **/permissive-** , questo programma stampa "`Standard two-phase`", perché il secondo overload di `func` non è visibile quando il compilatore raggiunge il modello. Se si aggiunge **/Zc: twoPhase**, il programma stampa "`Microsoft one-phase`". L'output è identico a quando non si specifica **/permissive-** .

I *nomi dipendenti* sono nomi che dipendono da un parametro di modello. Questi nomi hanno un comportamento di ricerca anch ' esso diverso in **/Zc: twoPhase-** . In modalità di conformità i nomi dipendenti non sono associati al punto della definizione del modello. Al contrario, il compilatore li cerca quando crea un'istanza del modello. Per le chiamate di funzione con un nome di funzione dipendente, il nome viene associato alle funzioni visibili nel sito di chiamata nella definizione del modello. Vengono aggiunti overload aggiuntivi dalla ricerca dipendente dall'argomento, sia al momento della definizione del modello, sia al punto della creazione di un'istanza del modello.

La ricerca in due fasi è costituita da due parti: la ricerca di nomi non dipendenti durante la definizione del modello e la ricerca di nomi dipendenti durante la creazione di istanze del modello. In **/Zc: twoPhase-** il compilatore non esegue la ricerca dipendente dagli argomenti separatamente dalla ricerca non qualificata. Ovvero non esegue la ricerca in due fasi, quindi i risultati della risoluzione dell'overload potrebbero essere diversi.

Di seguito è riportato un altro esempio:

```cpp
// zctwophase1.cpp
// To test options, compile by using
// cl /EHsc /W4 zctwophase1.cpp
// cl /EHsc /W4 /permissive- zctwophase1.cpp
// cl /EHsc /W4 /permissive- /Zc:twoPhase- zctwophase1.cpp

#include <cstdio>

void func(long) { std::puts("func(long)"); }

template <typename T> void tfunc(T t) {
    func(t);
}

void func(int) { std::puts("func(int)"); }

namespace NS {
    struct S {};
    void func(S) { std::puts("NS::func(NS::S)"); }
}

int main() {
    tfunc(1729);
    NS::S s;
    tfunc(s);
}
```

Quando viene compilato senza **/permissive-** , questo codice stampa:

```Output
func(int)
NS::func(NS::S)
```

Quando viene compilato con **/permissive-** , ma senza **/Zc: twoPhase**, questo codice stampa:

```Output
func(long)
NS::func(NS::S)
```

Quando viene compilato con **/permissive-** e **/Zc: twoPhase-** , questo codice stampa:

```Output
func(int)
NS::func(NS::S)
```

In modalità di conformità in **/permissive-** , la chiamata `tfunc(1729)` viene risolta nell'overload di `void func(long)`. Non viene risolto nell'overload di `void func(int)`, come in **/Zc: twoPhase-** . Questo perché il `func(int)` non qualificato viene dichiarato dopo la definizione del modello e non viene trovato tramite la ricerca dipendente dall'argomento. Tuttavia `void func(S)` partecipa alla ricerca dipendente dall'argomento, pertanto viene aggiunta al set di overload per la chiamata `tfunc(s)`, anche se viene dichiarata dopo la funzione del modello.

### <a name="update-your-code-for-two-phase-conformance"></a>Aggiornare il codice per la conformità a due fasi

Le versioni precedenti del compilatore non richiedono le parole chiave `template` e `typename` ovunque C++ lo standard li richiede. Queste parole chiave sono necessarie in alcune posizioni per distinguere il modo in cui i compilatori devono analizzare un nome dipendente durante la prima fase della ricerca. Ad esempio:

`T::Foo<a || b>(c);`

Un compilatore conforme analizza `Foo` come variabile nell'ambito di `T`, vale a dire che questo codice è un'espressione OR logica con `T::foo < a` come operando sinistro e `b > (c)` come operando destro. Se si intende usare `Foo` come modello di funzione, è necessario indicare che si tratta di un modello aggiungendo la parola chiave `template`:

`T::template Foo<a || b>(c);`

Nelle versioni di Visual Studio 2017 versione 15,3 e successive, quando si specifica **/permissive-** e **/Zc: twoPhase-** , il compilatore consente questo codice senza la parola chiave `template`. Il codice viene interpretato come una chiamata a un modello di funzione con un argomento di `a || b`, perché analizza solo i modelli in modo limitato. Il codice precedente non viene analizzato nella prima fase. Durante la seconda fase, c'è un contesto sufficiente a indicare che `T::Foo` è un modello anziché una variabile, quindi il compilatore non impone l'uso della parola chiave.

Questo comportamento può essere osservato anche eliminando la parola chiave `typename` prima dei nomi in corpi del modello di funzione, inizializzatori, argomenti predefiniti e argomenti noexcept. Ad esempio:

```cpp
template<typename T>
typename T::TYPE func(typename T::TYPE*)
{
    /* typename */ T::TYPE i;
}
```

Se non si usa la parola chiave `typename` nel corpo della funzione, questo codice viene compilato in **/permissive-/Zc: twoPhase-** , ma non in **/permissive-** alone. La parola chiave `typename` è obbligatoria per indicare che l'`TYPE` è dipendente. Poiché il corpo non viene analizzato in **/Zc: twoPhase-** , il compilatore richiesto non richiede la parola chiave. In modalità di conformità **/permissive-** , il codice senza la parola chiave `typename` genera errori. Per eseguire la migrazione del codice alla conformità in Visual Studio 2017 versione 15,3 e successive, inserire la parola chiave `typename` in cui è mancante.

Analogamente, si consideri questo esempio di codice:

```cpp
template<typename T>
typename T::template X<T>::TYPE func(typename T::TYPE)
{
    typename T::/* template */ X<T>::TYPE i;
}
```

In **/permissive-/Zc: twoPhase** e nei compilatori meno recenti il compilatore richiede solo la parola chiave `template` sulla riga 2. In modalità di conformità il compilatore ora richiede anche la parola chiave `template` nella riga 4 per indicare che `T::X<T>` è un modello. Cercare il codice che manca questa parola chiave e fornirlo per rendere il codice conforme allo standard.

Per ulteriori informazioni sui problemi di conformità, vedere [ C++ miglioramenti della conformità in Visual Studio](../../overview/cpp-conformance-improvements.md) e comportamento non [standard](../../cpp/nonstandard-behavior.md).

### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [Impostare le proprietà del compilatore e di compilazione C++ in Visual Studio](../working-with-project-properties.md).

1. Selezionare la pagina delle proprietà **Proprietà di configurazione** > **C/C++**  > **Riga di comando**.

1. Modificare la proprietà **Opzioni aggiuntive** per includere **/Zc: twoPhase,** quindi scegliere **OK**.

## <a name="see-also"></a>Vedere anche

[/Zc (conformità)](zc-conformance.md)
