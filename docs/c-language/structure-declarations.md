---
title: Dichiarazioni di struttura
ms.date: 11/04/2016
helpviewer_keywords:
- structure declarations
- anonymous structures
- types [C], declarations
- structure members
- embedded structures
ms.assetid: 5be3be77-a236-4153-b574-7aa77675df7f
ms.openlocfilehash: a17bb996f13fdbe11bb569c8af5669a9d0c5363f
ms.sourcegitcommit: f4be868c0d1d78e550fba105d4d3c993743a1f4b
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 02/12/2019
ms.locfileid: "56152287"
---
# <a name="structure-declarations"></a>Dichiarazioni di struttura

Una "dichiarazione di struttura" denomina un tipo e specifica una sequenza di valori variabili (denominati "membri" o " campi" della struttura) con tipi differenti. Un identificatore facoltativo, denominato "tag," fornisce il nome del tipo di struttura e può essere utilizzato nei riferimenti successivi a tale tipo. Una variabile del tipo di struttura contiene l'intera sequenza definita dal tipo specificato. Le strutture in C sono simili ai tipi noti come "record" in altri linguaggi.

## <a name="syntax"></a>Sintassi

*struct-or-union-specifier*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*struct-or-union* *identifier*<sub>opt</sub> **{** *struct-declaration-list* **}**<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*struct-or-union* *identifier*

*struct-or-union*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**struct**<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**union**

*struct-declaration-list*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*struct-declaration*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*struct-declaration-list* *struct-declaration*

*struct-declaration*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*specifier-qualifier-list* *struct-declarator-list* **;**

*specifier-qualifier-list*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*type-specifier* *specifier-qualifier-list*<sub>opt</sub><br/>
&nbsp;&nbsp;&nbsp;&nbsp;*type-qualifier* *specifier-qualifier-list*<sub>opt</sub>

*struct-declarator-list*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*struct-declarator* *struct-declarator-list* **,** *struct-declarator*

*struct-declarator*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*declarator*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*type-specifier* *declarator*<sub>opt</sub> **:** *constant-expression*

La dichiarazione di un tipo di struttura non riserva spazio per una struttura. È solo un modello per le dichiarazioni delle variabili di struttura successive.

È possibile usare un *identifier* (tag) definito in precedenza per fare riferimento a un tipo di struttura definito altrove. In questo caso, non è possibile ripetere *struct-declaration-list* se la definizione è visibile. Le dichiarazioni di puntatori a strutture e a typedef per i tipi di strutture possono utilizzare il tag della struttura prima che il tipo di struttura venga definito. Tuttavia, la definizione della struttura deve essere rilevata prima di qualsiasi effettivo utilizzo della dimensione dei campi. Si tratta di una definizione incompleta del tipo e del tag del tipo. Affinché questa definizione venga completata, è necessario che una definizione di tipo sia presente più avanti nello stesso ambito.

*struct-declaration-list* specifica i tipi e i nomi dei membri della struttura. Un argomento *struct-declaration-list* contiene una o più dichiarazioni di variabile o campo di bit.

Ogni variabile dichiarata in *struct-declaration-list* è definita come un membro del tipo di struttura. Le dichiarazioni delle variabili in *struct-declaration-list* hanno lo stesso formato di altre dichiarazioni delle variabili illustrate in questa sezione, ad eccezione del fatto che le dichiarazioni non possono contenere gli identificatori o gli inizializzatori di una classe di archiviazione. I membri della struttura possono avere qualsiasi tipo di variabile tranne il tipo `void`, un tipo incompleto o un tipo di funzione.

Un membro non può essere dichiarato con lo stesso tipo della struttura in cui è presente. Tuttavia, un membro può essere dichiarato come puntatore al tipo di struttura in cui è presente purché il tipo di struttura disponga di un tag. Questo consente di creare elenchi di strutture collegati.

Le strutture seguono lo stesso ambito di altri identificatori. Gli identificatori di struttura devono essere distinti da altri tag di struttura, unione ed enumerazione con la stessa visibilità.

Ogni elemento *struct-declaration* in un elemento *struct-declaration-list* deve essere univoco all'interno dell'elenco. Tuttavia, i nomi di identificatori in un elemento *struct-declaration-list* non devono essere univoci rispetto ai nomi delle variabili comuni o agli identificatori presenti in altri elenchi di dichiarazioni di strutture.

Le strutture annidate sono accessibili come se fossero state dichiarate a livello di ambito file. Ad esempio, data la seguente dichiarazione:

```C
struct a
{
    int x;
    struct b
    {
      int y;
    } var2;
} var1;
```

queste dichiarazioni sono entrambe valide:

```C
struct a var3;
struct b var4;
```

## <a name="examples"></a>Esempi

In questi esempi vengono illustrate le dichiarazioni di strutture:

```C
struct employee   /* Defines a structure variable named temp */
{
    char name[20];
    int id;
    long class;
} temp;
```

La struttura `employee` dispone di tre membri: `name`, `id` e `class`. Il membro `name` è una matrice di 20 elementi e `id` e `class` sono membri semplici, rispettivamente con il tipo `int` e **long**. L'identificatore `employee` è l'identificatore di struttura.

```C
struct employee student, faculty, staff;
```

In questo esempio vengono definiti tre variabili di struttura: `student`, `faculty` e `staff`. Ogni struttura presenta lo stesso elenco di tre membri. I membri vengono dichiarati per avere il tipo di struttura `employee`, definito nell'esempio precedente.

```C
struct           /* Defines an anonymous struct and a */
{                /* structure variable named complex  */
    float x, y;
} complex;
```

La struttura `complex` contiene due membri con il tipo **float**, `x` e `y`. Il tipo di struttura non presenta tag ed è pertanto senza nome o anonimo.

```C
struct sample   /* Defines a structure named x */
{
    char c;
    float *pf;
    struct sample *next;
} x;
```

I primi due membri della struttura sono una variabile `char` e un puntatore a un valore **float**. Il terzo membro, `next`, viene dichiarato come un puntatore al tipo di struttura che si sta definendo (`sample`).

Le strutture anonime possono essere utili quando non è necessario il tag denominato. Questa situazione si verifica quando una dichiarazione definisce tutte le istanze della struttura. Ad esempio:

```C
struct
{
    int x;
    int y;
} mystruct;
```

Le strutture incorporate sono spesso anonime.

```C
struct somestruct
{
    struct    /* Anonymous structure */
    {
        int x, y;
    } point;
    int type;
} w;
```

**Sezione specifica Microsoft**

Il compilatore consente l'utilizzo di una matrice senza dimensione o di dimensione pari a zero come ultimo membro di una struttura. Questa operazione può risultare utile se la dimensione di una matrice costante è diversa quando viene utilizzata in situazioni differenti. La dichiarazione di una struttura è simile alla seguente:

**struct** *identifier* **{** *set-of-declarations* *type* <em>array-name</em>**\[]; };**

Le matrici senza dimensione possono apparire solo come ultimo membro di una struttura. Le strutture contenenti le dichiarazioni di matrice senza dimensione possono essere annidate in altre strutture purché nelle strutture di inclusione non siano dichiarati altri membri. Le matrici di queste strutture non sono consentite. L'operatore `sizeof`, applicato a una variabile di questo tipo o al tipo stesso, presuppone il valore 0 per la dimensione della matrice.

Le dichiarazioni della struttura possono essere specificate senza un dichiaratore quando sono membri di un'altra struttura o unione. I nomi dei campi vengono promossi alla struttura di inclusione. Ad esempio, una struttura senza nome avrà il seguente aspetto:

```C
struct s
{
    float y;
    struct
    {
        int a, b, c;
    };
    char str[10];
} *p_s;
.
.
.
p_s->b = 100;  /* A reference to a field in the s structure */
```

Per altre informazioni sui riferimenti alle strutture, vedere [Membri di strutture e unioni](../c-language/structure-and-union-members.md).

**Fine sezione specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[Dichiaratori e dichiarazioni di variabili](../c-language/declarators-and-variable-declarations.md)
