---
title: Errori del compilatore da C3500 a C3999
ms.date: 04/21/2019
f1_keywords:
- C3502
- C3503
- C3504
- C3511
- C3512
- C3513
- C3514
- C3515
- C3516
- C3517
- C3518
- C3520
- C3521
- C3522
- C3523
- C3524
- C3525
- C3526
- C3527
- C3528
- C3529
- C3534
- C3542
- C3543
- C3544
- C3545
- C3546
- C3547
- C3548
- C3549
- C3557
- C3558
- C3559
- C3560
- C3561
- C3562
- C3563
- C3564
- C3565
- C3566
- C3567
- C3568
- C3569
- C3570
- C3571
- C3572
- C3573
- C3574
- C3575
- C3576
- C3577
- C3578
- C3579
- C3580
- C3581
- C3582
- C3583
- C3584
- C3585
- C3586
- C3587
- C3588
- C3589
- C3590
- C3591
- C3592
- C3593
- C3594
- C3595
- C3596
- C3597
- C3598
- C3599
- C3600
- C3601
- C3602
- C3604
- C3605
- C3613
- C3614
- C3616
- C3620
- C3621
- C3635
- C3636
- C3649
- C3658
- C3659
- C3660
- C3663
- C3664
- C3667
- C3674
- C3676
- C3677
- C3678
- C3679
- C3680
- C3681
- C3682
- C3683
- C3684
- C3685
- C3686
- C3687
- C3688
- C3689
- C3690
- C3691
- C3696
- C3716
- C3720
- C3725
- C3726
- C3729
- C3730
- C3735
- C3742
- C3746
- C3750
- C3751
- C3756
- C3757
- C3758
- C3759
- C3760
- C3770
- C3773
- C3774
- C3775
- C3776
- C3777
- C3778
- C3779
- C3780
- C3781
- C3782
- C3783
- C3784
- C3785
- C3786
- C3787
- C3801
- C3802
- C3806
- C3811
- C3814
- C3819
- C3822
- C3823
- C3826
- C3827
- C3829
- C3837
- C3840
- C3841
- C3843
- C3844
- C3845
- C3863
- C3870
- C3871
- C3875
- C3879
- C3881
- C3882
- C3884
- C3885
- C3897
- C3905
- C3906
- C3916
- C3921
- C3924
- C3925
- C3926
- C3927
- C3928
- C3930
- C3931
- C3932
- C3933
- C3934
- C3935
- C3936
- C3937
- C3938
- C3939
- C3940
- C3941
- C3945
- C3946
- C3947
- C3948
- C3949
- C3950
- C3951
- C3952
- C3953
- C3954
- C3955
- C3956
- C3957
- C3958
- C3959
- C3960
- C3961
- C3962
- C3963
- C3964
- C3965
- C3966
- C3967
- C3968
- C3969
- C3970
- C3971
- C3972
- C3975
- C3976
- C3977
- C3978
- C3979
- C3980
- C3981
- C3982
- C3983
- C3984
- C3985
- C3986
- C3987
- C3988
- C3989
- C3990
- C3991
- C3992
- C3993
- C3994
- C3995
- C3996
- C3997
- C3998
- C3999
ms.assetid: bd6f23ad-b300-4e07-8e35-9661cab1585f
ms.openlocfilehash: eddadeeeb014c6b64376554f7ff025a06e8935c9
ms.sourcegitcommit: 63784729604aaf526de21f6c6b62813882af930a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/17/2020
ms.locfileid: "79446943"
---
# <a name="compiler-errors-c3500-through-c3999"></a>Errori del compilatore da C3500 a C3999

Negli articoli di questa sezione della documentazione viene illustrato un subset dei messaggi di errore generati dal compilatore.

[!INCLUDE[error-boilerplate](../../error-messages/includes/error-boilerplate.md)]

## <a name="error-messages"></a>messaggi di errore

|Errore|Message|
|-----------|-------------|
|[Errore del compilatore C3500](compiler-error-c3500.md)|ProgID '*ProgID*' non valido|
|[Errore del compilatore C3501](compiler-error-c3501.md)|Nessun TypeLib registrato per il ProgID '*ProgID*'|
|Errore del compilatore C3502|Impossibile ottenere LIBID per il ProgID '*ProgID*'|
|Errore del compilatore C3503|il carattere ' 0x*value*' non è consentito in un valore letterale stringa non elaborata|
|Errore del compilatore C3504|non è possibile creare il GUID dalla stringa '*String*'|
|[Errore del compilatore errore C3505](compiler-error-c3505.md)|Impossibile caricare la libreria dei tipi '*Library*'|
|[Errore del compilatore C3506](compiler-error-c3506.md)|nessuna libreria dei tipi registrata per LIBID '*Library*'|
|[Errore del compilatore C3507](compiler-error-c3507.md)|un ProgID non può contenere più di 39 caratteri:'*ProgID*'; né contengono segni di punteggiatura oltre a' .'; né iniziare con una cifra|
|[Errore del compilatore C3508](compiler-error-c3508.md)|'*Type*': non è un tipo di automazione valido|
|[Errore del compilatore C3509](compiler-error-c3509.md)|'*Type*': tipo restituito di automazione non valido. Quando un parametro è contrassegnato come ' retval ', il tipo restituito deve essere ' void ',' HRESULT ' o ' SCODE '|
|[Errore del compilatore C3510](compiler-error-c3510.md)|Impossibile individuare la *libreria* della libreria di tipi dipendente|
|Errore del compilatore C3511|'*Identifier*': una chiamata a un costruttore delegante deve essere l'unico inizializzatore di membro|
|Errore del compilatore C3512|la sequenza di caratteri di delimitazione per un valore letterale stringa non elaborata non può contenere più di 16 caratteri|
|Errore del compilatore C3513|'*String*': carattere delimitatore valore letterale stringa non elaborata non supportato|
|Errore del compilatore C3514|'*character*' (*valore*): carattere delimitatore letterale stringa non elaborata non supportato|
|Errore del compilatore C3515|Se un argomento di una specializzazione parziale di un modello di classe è un'espansione del pacchetto, deve essere l'ultimo argomento|
|Errore del compilatore C3516|fine del file imprevista durante l'elaborazione del valore letterale stringa non elaborata. non è stata trovata alcuna corrispondenza per la sequenza di delimitatore '*String*'|
|Errore del compilatore C3517|'*Identifier*' una dichiarazione alias non può avere un tipo che contiene ' auto '|
|Errore del compilatore C3518|'*Identifier*': in un contesto di inizializzazione Direct-list il tipo per '*Type*' può essere dedotto solo da una singola espressione dell'inizializzatore|
|[Errore del compilatore C3519](compiler-error-c3519.md)|'*Parameter*': parametro non valido per embedded_idl attributo|
|Errore del compilatore C3520|'*Identifier*': il pacchetto parametri deve essere espanso in questo contesto|
|Errore del compilatore C3521|'*Identifier*' non è un pacchetto di parametri|
|Errore del compilatore C3522|'*Type*': il pacchetto parametri non può essere espanso in questo contesto|
|Errore del compilatore C3523|' sizeof.. .' richiede come argomento un pacchetto parametri non espanso|
|Errore del compilatore C3524|'*Identifier*':' sizeof ' non può essere applicato a un pacchetto di parametri. Si intendeva usare ' sizeof.. .'?|
|Errore del compilatore C3525|'*Parameter*': se un modello di classe ha un pacchetto di parametri di modello, deve essere visualizzato alla fine dell'elenco dei parametri di modello|
|Errore del compilatore C3526|'...' non può essere applicato a' This '|
|Errore del compilatore C3527|'*Identifier*' non è un operando valido per ' sizeof.. .'. Si intendeva usare ' sizeof '?|
|Errore del compilatore C3528|'*identificatore1*': il numero di elementi nell'espansione di questo pacchetto non corrisponde al numero di elementi in '*identifier2*'|
|Errore del compilatore C3529|'*Parameter*': un pacchetto di parametri di modello non può avere un argomento predefinito|
|[Errore del compilatore C3530](compiler-error-c3530.md)|'*Type*' non può essere combinato con qualsiasi altro identificatore di tipo|
|[Errore del compilatore C3531](compiler-error-c3531.md)|'*Identifier*': un simbolo il cui tipo contiene '*Type*' deve avere un inizializzatore|
|[Errore del compilatore C3532](compiler-error-c3532.md)|il tipo di elemento di una matrice non può essere un tipo che contiene '*Type*'|
|[Errore del compilatore C3533](compiler-error-c3533.md)|un parametro non può avere un tipo che contiene '*Type*'|
|Errore del compilatore C3534|Obsoleto.|
|[Errore del compilatore C3535](compiler-error-c3535.md)|non è possibile dedurre il tipo per '*tipo1*' da'*tipo2*'|
|[Errore del compilatore C3536](compiler-error-c3536.md)|'*Identifier*': non può essere usato prima dell'inizializzazione|
|[Errore del compilatore C3537](compiler-error-c3537.md)|non è possibile eseguire il cast a un tipo che contiene '*Type*'|
|[Errore del compilatore C3538](compiler-error-c3538.md)|in un elenco di dichiaratori '*Type*' deve sempre dedurre allo stesso tipo|
|[Errore del compilatore C3539](compiler-error-c3539.md)|un argomento di modello non può essere un tipo che contiene '*Type*'|
|[Errore del compilatore C3540](compiler-error-c3540.md)|non è possibile applicare sizeof a un tipo che contiene '*Type*'|
|[Errore del compilatore C3541](compiler-error-c3541.md)|typeid non può essere applicato a un tipo che contiene '*Type*'|
|Errore del compilatore C3542|'*Identifier*': una funzione membro virtuale non deve avere un tipo restituito che contiene '*Type*'|
|Errore del compilatore C3543|'*Type*': non contiene un pacchetto di parametri|
|Errore del compilatore C3544|'*Parameter*': il pacchetto di parametri prevede un argomento di modello di tipo|
|Errore del compilatore C3545|'*Parameter*': il pacchetto parametri prevede un argomento di modello non di tipo|
|Errore del compilatore C3546|'.. .': nessun pacchetto di parametri disponibile per l'espansione|
|Errore del compilatore C3547|non è possibile usare il parametro di modello '*Parameter*' perché segue un pacchetto di parametri di modello e non può essere dedotto dai parametri di funzione di '*Function*'|
|Errore del compilatore C3548|'*Identifier*': il pacchetto parametri non può essere usato in questo contesto|
|Errore del compilatore C3549|'*value*': un pacchetto di parametri di funzione non può avere un argomento predefinito|
|[Errore del compilatore C3550](compiler-error-c3550.md)|in questo contesto sono consentiti solo valori 'decltype(auto)' normali|
|[Errore del compilatore C3551](compiler-error-c3551.md)|Se viene usato un tipo restituito finale, il tipo restituito principale sarà il singolo identificatore di tipo ' auto ' (non '*Type*')|
|[Errore del compilatore C3552](compiler-error-c3552.md)|previsto ' decltype (auto)'|
|[Errore del compilatore C3553](compiler-error-c3553.md)|con decltype è prevista un'espressione e non un tipo|
|[Errore del compilatore C3554](compiler-error-c3554.md)|'*Type*' non può essere combinato con qualsiasi altro identificatore di tipo|
|[Errore del compilatore C3555](compiler-error-c3555.md)|argomento di 'decltype' non corretto|
|[Errore del compilatore C3556](compiler-error-c3556.md)|'*Expression*': argomento non corretto per ' decltype '|
|Errore del compilatore C3557|Obsoleto.|
|Errore del compilatore C3558|Obsoleto.|
|Errore del compilatore C3559|chiamata ricorsiva a'*Function*': ricorsione rilevata durante la compilazione del grafico delle chiamate per la concorrenza::p arallel_for_each in:'*Function*'|
|Errore del compilatore C3560|'*Function*': il non è disponibile durante la compilazione del grafico delle chiamate per la concorrenza::p arallel_for_each in:'*Function*'|
|Errore del compilatore C3561|operazione di barriera del riquadro trovata nel flusso di controllo che non è uniforme nell'affiancamento durante la compilazione del grafico delle chiamate per la concorrenza::p arallel_for_each in:'*Function*'|
|Errore del compilatore C3562|la funzione intrinseca '*Function*' è limitata a non avere più di un *numero* di parametri|
|Errore del compilatore C3563|Rilevato ciclo infinito durante la compilazione del grafico delle chiamate per la concorrenza::p arallel_for_each in:'*Function*'|
|Errore del compilatore C3564|lettura di un valore non inizializzato durante la compilazione del grafico delle chiamate per la concorrenza::p arallel_for_each in:'*Function*'|
|Errore del compilatore C3565|La quantità totale di memoria tile_static (byte*numero* ) supera il limite di byte *numerici* durante la compilazione del grafico delle chiamate per la concorrenza::p arallel_for_each|
|Errore del compilatore C3566|blocchi con effetti collaterali annidati troppo profondamente durante la compilazione del grafico delle chiamate per la concorrenza::p arallel_for_each in:'*Function*'|
|Errore del compilatore C3567|divisione o mod per zero rilevato durante la compilazione del grafico delle chiamate per la concorrenza::p arallel_for_each in:'*Function*'|
|Errore del compilatore C3568|la somma dei registri supera il limite di *numero* durante la compilazione del grafico delle chiamate per la concorrenza::p arallel_for_each. Semplifica il programma|
|Errore del compilatore C3569|race condition rilevato durante la compilazione del grafico delle chiamate per la concorrenza::p arallel_for_each in:'*Function*'|
|Errore del compilatore C3570|uso non valido dell'ambito con restrizioni amp durante la compilazione con/CLR|
|Errore del compilatore C3571|'*Type*': argomento di dominio di calcolo non valido; non è un tipo di classe|
|Errore del compilatore C3572|'*Type*': argomento di dominio di calcolo non valido; membro pubblico mancante:' static const int Rank ' o valore di pertinenza non positivo|
|Errore del compilatore C3573|Il numero di istanze di concurrency:: graphics:: Sampler passato alla concorrenza::p arallel_for_each non può superare il *numero*|
|Errore del compilatore C3574|'*Type*': extent di sezione non validi: deve essere positivo e (1) Z < = *numero*; (2) Z*Y*X < = *numero*|
|Errore del compilatore C3575|'*Type*': argomento di dominio di calcolo non valido; membro pubblico mancante:' concurrency:: index <*number*> _map_index (const Concurrency:: index <*Number*> &) Restrict (amp)'|
|Errore del compilatore C3576|'*Type*': Concurrency::d etails:: _Parallel_for_each argomento #*Number* con tipo non supportato|
|Errore del compilatore C3577|concorrenza: l'argomento del kernel di:p arallel_for_each non è valido: non è possibile risolvere la chiamata al membro ' void operator () (*tipo*) Restrict (amp)'|
|Errore del compilatore C3578|Dimensioni dell'oggetto funzione passate alla concorrenza::p arallel_for_each non possono superare i byte *numerici*|
|Errore del compilatore C3579|Il numero di istanze di sola lettura di concurrency:: Array e Concurrency:: graphics:: texture passate a Concurrency::p arallel_for_each non può superare il *numero*|
|Errore del compilatore C3580|Il numero di istanze scrivibili di concurrency:: Array e Concurrency:: graphics:: texture passate a Concurrency::p arallel_for_each non può superare il *numero*|
|Errore del compilatore C3581|'*Type*': tipo non supportato in codice con restrizioni amp|
|Errore del compilatore C3582|Obsoleto.|
|Errore del compilatore C3583|'*Identifier*': la dimensione della variabile (*numero* byte) è maggiore della dimensione massima (byte*numero* ) supportata nel codice con restrizioni amp|
|Errore del compilatore C3584|utilizzo non supportato di tile_static su'*Identifier*'|
|Errore del compilatore C3585|'*Identifier*' ha una classe di archiviazione non supportata in codice con restrizioni amp|
|Errore del compilatore C3586|'*Identifier*': l'uso di variabili globali o statiche non è supportato in codice con restrizioni amp|
|Errore del compilatore C3587|dynamic_cast non è supportato in codice con restrizioni amp|
|Errore del compilatore C3588|il cast da'*tipo1*' a'*tipo2*' non è supportato in codice con restrizioni amp|
|Errore del compilatore C3589|'*String*': utilizzo non supportato di valori letterali stringa in codice con restrizioni amp|
|Errore del compilatore C3590|'*token*': acquisizione per riferimento o acquisizione ' This ' non supportata se l'espressione lambda è con restrizioni amp|
|Errore del compilatore C3591|operatore typeid non supportato in codice con restrizioni amp|
|Errore del compilatore C3592|Assembly nativo inline (' __asm ') non supportato in codice con restrizioni amp|
|Errore del compilatore C3593|' GOTO ' non è supportato in codice con restrizioni amp|
|Errore del compilatore C3594|la gestione delle eccezioni (TRY, catch, throw e così via) non è supportata in codice con restrizioni amp|
|Errore del compilatore C3595|il valore della costante non è compreso nell'intervallo supportato in codice con restrizioni amp|
|Errore del compilatore C3596|'*Parameter*' ('*Type*'): la variabile acquisita dall'espressione lambda presenta un tipo non supportato in codice con restrizioni amp|
|Errore del compilatore C3597|'*Parameter*':'*Identifier*' non può essere acquisito per valore se l'espressione lambda è con restrizioni amp|
|Errore del compilatore C3598|l'istruzione label non è supportata in codice con restrizioni amp|
|Errore del compilatore C3599|'*operator*': non è possibile eseguire l'aritmetica dei puntatori su un puntatore a bool in codice con restrizioni amp|
|Errore del compilatore C3600|'*Function*': uso del riquadro\_memoria statica rilevata durante la compilazione del grafico delle chiamate per la concorrenza non di affiancamento::p arallel\_for_each in:'*Function*'|
|Errore del compilatore C3601|'*Type*': tipo di argomento non valido per la funzione di diagnostica amp '*Function*'|
|Errore del compilatore C3602|Rilevato flusso di controllo non supportato durante la compilazione del grafico delle chiamate per la concorrenza::p arallel_for_each in:'*Function*'|
|[Errore del compilatore C3603](compiler-error-c3603.md)|'*Symbol*': tipo '*Type*' non ancora supportato|
|Errore del compilatore C3604|'*Identifier*': può creare solo un oggetto gestito nell'heap GC|
|Errore del compilatore C3605|Il numero totale di campionatori (*numero* acquisito e *numero* predefinito) supera il *numero* durante la compilazione del grafico delle chiamate per la concorrenza::p arallel_for_each in:'*Function*'|
|Errore del compilatore C3606|Obsoleto.|
|Errore del compilatore C3607|Obsoleto.|
|Errore del compilatore C3608|Obsoleto.|
|[Errore del compilatore C3609](compiler-error-c3609.md)|'*Identifier*': una funzione ' sealed/final ' deve essere virtuale|
|[Errore del compilatore C3610](compiler-error-c3610.md)|'*Identifier*': il tipo di valore deve essere ' boxed ' prima che sia possibile chiamare il metodo '*Method*'|
|[Errore del compilatore C3611](compiler-error-c3611.md)|'*Identifier*': una funzione sealed non può avere un identificatore pure|
|[Errore del compilatore C3612](compiler-error-c3612.md)|'*Identifier*': una classe sealed non può avere metodi virtuali puri|
|Errore del compilatore C3613|manca il tipo restituito dopo '->' (si presuppone ' int ')|
|Errore del compilatore C3614|Valori diversi per le dimensioni del pacchetto all'interno della stessa classe; Previous è'*value*', il nuovo valore è'*value*'|
|[Errore del compilatore C3615](compiler-error-c3615.md)|la funzione constExpr '*Function*' non può produrre un'espressione costante|
|Errore del compilatore C3616|Obsoleto.|
|Errore del compilatore C3617|Obsoleto.|
|[Errore del compilatore C3618](compiler-error-c3618.md)|'*Declaration*': Impossibile definire un metodo contrassegnato dllimport|
|[Errore del compilatore C3619](compiler-error-c3619.md)|Impossibile dichiarare un modello all'interno di un tipo gestito/WinRT|
|Errore del compilatore C3620|'*Type*': l'impostazione dell'allineamento non è consentita per i tipi WinRT|
|Errore del compilatore C3621|'*Type*': solo il valore di compressione predefinito (*Number*) è consentito per i tipi WinRT|
|[Errore del compilatore C3622](compiler-error-c3622.md)|*tipo*': Impossibile creare un'istanza di una classe dichiarata come '*keyword*'|
|[Errore del compilatore C3623](compiler-error-c3623.md)|'*Identifier*': i campi di bit non sono supportati nei tipi gestiti/WinRT|
|[Errore del compilatore C3624](compiler-error-c3624.md)|'*Type*': l'utilizzo di questo tipo richiede un riferimento all'assembly o al modulo '*Identifier*'|
|[Errore del compilatore C3625](compiler-error-c3625.md)|'*Class*': un tipo nativo non può derivare da un tipo gestito/WinRT '*Type*'|
|[Errore del compilatore C3626](compiler-error-c3626.md)|'*Identifier*': la parola chiave '*keyword*' può essere usata solo su interfacce com, funzioni membro e membri dati che sono puntatori a delegati|
|[Errore del compilatore C3627](compiler-error-c3627.md)|Solo un tipo valore può essere boxed|
|[Errore del compilatore C3628](compiler-error-c3628.md)|'*Class*': le classi gestite/WinRT supportano solo l'ereditarietà pubblica|
|Errore del compilatore C3629|'*token*': un valore predefinito di acquisizione può essere visualizzato solo all'inizio di un elenco di acquisizione delle espressioni lambda|
|[Errore del compilatore C3630](compiler-error-c3630.md)|errore durante l'elaborazione del token '*token*'|
|[Errore del compilatore C3631](compiler-error-c3631.md)|'*Event*': Impossibile eseguire l'overload di eventi gestiti/WinRT|
|[Errore del compilatore C3632](compiler-error-c3632.md)|'*Event*': stile di evento non valido per il *costrutto*|
|[Errore del compilatore C3633](compiler-error-c3633.md)|Impossibile definire '*Identifier*' come membro di '*Class*' gestito|
|[Errore del compilatore C3634](compiler-error-c3634.md)|'*member*': non è possibile definire un metodo astratto di una classe gestita/WinRT|
|Errore del compilatore C3635|'*Identifier*': non può essere applicato a una classe gestita/WinRT (usare invece '*Identifier*')|
|Errore del compilatore C3636|'*Identifier*': Impossibile applicare a questo tipo|
|[Errore del compilatore C3637](compiler-error-c3637.md)|'*Function*': una definizione di funzione Friend non può essere una specializzazione di un modello di funzione/generico|
|[Errore del compilatore C3638](compiler-error-c3638.md)|'*operator*': non è possibile ridefinire gli operatori di conversione boxing e unboxing standard|
|Errore del compilatore C3639|Obsoleto.|
|[Errore del compilatore C3640](compiler-error-c3640.md)|'*member*': è necessario definire una funzione membro virtuale o di riferimento di una classe locale|
|[Errore del compilatore C3641](compiler-error-c3641.md)|'*Function*': Convenzione di chiamata non valida '*Convention*' per la funzione compilata con/CLR: pure o/CLR: safe|
|[Errore del compilatore C3642](compiler-error-c3642.md)|'*Function*': Impossibile chiamare una funzione con __clrcall convenzione di chiamata dal codice nativo|
|Errore del compilatore C3643|Obsoleto.|
|[Errore del compilatore C3644](compiler-error-c3644.md)|'*Function*': Impossibile compilare la funzione per generare codice gestito|
|[Errore del compilatore C3645](compiler-error-c3645.md)|'*Function*': non è possibile usare __clrcall per le funzioni compilate in codice nativo|
|[Errore del compilatore C3646](compiler-error-c3646.md)|'*Identifier*': identificatore di override sconosciuto|
|Errore del compilatore C3647|Obsoleto.|
|[Errore del compilatore C3648](compiler-error-c3648.md)|Questa sintassi di override esplicita non è supportata per i tipi gestiti|
|Errore del compilatore C3649|Questa sintassi di override esplicita non è consentita con/ZW|
|[Errore del compilatore C3650](compiler-error-c3650.md)|'*member*': non può essere usato come override esplicito. deve essere una funzione membro virtuale di una classe base|
|[Errore del compilatore C3651](compiler-error-c3651.md)|'*member*': non può essere usato come override esplicito. deve essere un membro di una classe base|
|[Errore del compilatore C3652](compiler-error-c3652.md)|'*member*': una funzione che esegue l'override esplicito deve essere virtuale|
|[Errore del compilatore C3653](compiler-error-c3653.md)|'*Identifier*': Impossibile utilizzare come override denominato. Impossibile trovare una funzione sottoposta a override. si è omesso di denominare la funzione in modo esplicito usando un operatore::?|
|[Errore del compilatore C3654](compiler-error-c3654.md)|'*token*': errore di sintassi nell'override esplicito|
|[Errore del compilatore C3655](compiler-error-c3655.md)|'*member*': funzione già sottoposta a override in modo esplicito|
|[Errore del compilatore C3656](compiler-error-c3656.md)|'*keyword*': Impossibile ripetere l'identificatore di override|
|[Errore del compilatore C3657](compiler-error-c3657.md)|un distruttore o un finalizzatore non può eseguire l'override esplicito o eseguire l'override esplicito|
|Errore del compilatore C3658|Obsoleto.|
|Errore del compilatore C3659|'*member*': identificatore di override '*keyword*' non supportato|
|Errore del compilatore C3660|'*member1*': nasconde il membro ereditato '*membro2*'|
|[Errore del compilatore C3661](compiler-error-c3661.md)|l'elenco di override esplicito non ha trovato metodi di cui eseguire l'override|
|[Errore del compilatore C3662](compiler-error-c3662.md)|'*member*': identificatore di override '*keyword*' consentito solo su funzioni membro di classi gestite/WinRT|
|Errore del compilatore C3663|Obsoleto.|
|Errore del compilatore C3664|'*member*': non può essere usato come override esplicito. deve avere accessibilità' Public ' o ' protected '|
|[Errore del compilatore C3665](compiler-error-c3665.md)|'*member*': identificatore di override '*keyword*' non consentito in un distruttore/finalizzatore|
|[Errore del compilatore C3666](compiler-error-c3666.md)|'*Constructor*': identificatore di override '*keyword*' non consentito in un costruttore|
|Errore del compilatore C3667|'*attribute*': l'attributo non supporta l'espansione del pacchetto|
|[Errore del compilatore C3668](compiler-error-c3668.md)|'*member*': il metodo con identificatore di override ' override ' non ha eseguito l'override di alcun metodo della classe base|
|[Errore del compilatore C3669](compiler-error-c3669.md)|'*member*': identificatore di override ' override ' non consentito su funzioni membro statiche o costruttori|
|[Errore del compilatore C3670](compiler-error-c3670.md)|'*member*': Impossibile eseguire l'override del metodo '*member*' della classe di base inaccessibile|
|[Errore del compilatore C3671](compiler-error-c3671.md)|'*member*': la funzione non esegue l'override di '*member*'|
|[Errore del compilatore C3672](compiler-error-c3672.md)|l'espressione pseudo-distruttore può essere utilizzata solo come parte di una chiamata di funzione|
|[Errore del compilatore C3673](compiler-error-c3673.md)|'*Class*': la classe non ha un costruttore di copia|
|Errore del compilatore C3674|il modulo della libreria standard '*Module*' non è stato trovato|
|[Errore del compilatore C3675](compiler-error-c3675.md)|'*Function*': è riservato perché è definito '*Property*'|
|Errore del compilatore C3676|'*Class*': la classe di riferimento e la classe di base hanno attributi incompatibili ' [*attribute*]'|
|Errore del compilatore C3677|il valore letterale stringa dopo ' operator ' non può avere un prefisso di codifica|
|Errore del compilatore C3678|il valore letterale stringa dopo ' operator ' deve essere la stringa vuota ' "" ""'|
|Errore del compilatore C3679|previsto identificatore del suffisso letterale dopo ' operator "" ""|
|Errore del compilatore C3680|non è possibile concatenare valori letterali stringa definiti dall'utente con identificatori di suffisso letterale non corrispondenti|
|Errore del compilatore C3681|' FallThrough ': l'attributo può essere presente solo in un'istruzione switch di inclusione|
|Errore del compilatore C3682|' operator *Identifier*': Impossibile dichiarare il modello di operatore di operatore/valore letterale con ' C linkage '|
|Errore del compilatore C3683|Impossibile definire sia un modello di operatore letterale non elaborato che un operatore Literal con lo stesso identificatore di suffisso letterale|
|Errore del compilatore C3684|' operator *Identifier*': la dichiarazione dell'operatore Literal ha un elenco di parametri non valido|
|Errore del compilatore C3685|' operator *Identifier*': il modello di operatore di valori letterali non può contenere parametri di funzione|
|Errore del compilatore C3686|' operator *Identifier*': il modello di operatore Literal deve avere esattamente un parametro di modello che è un pacchetto di parametri|
|Errore del compilatore C3687|' operator *Identifier*': il modello di operatore Literal deve avere un parametro di modello non di tipo ' Char '|
|Errore del compilatore C3688|suffisso letterale '*suffisso*' non valido. l'operatore letterale o il modello di operatore letterale ' operator *Identifier*' non è stato trovato|
|Errore del compilatore C3689|' operator *Identifier*': il modello di operatore literal/literal deve trovarsi in un ambito globale o dello spazio dei nomi|
|Errore del compilatore C3690|è previsto un valore letterale stringa, ma è stato trovato un valore letterale stringa definito dall'utente|
|Errore del compilatore C3691|prefisso letterale '*Prefix*' non valido|
|Errore del compilatore C3692|Obsoleto.|
|Errore del compilatore C3693|Obsoleto.|
|Errore del compilatore C3694|Obsoleto.|
|Errore del compilatore C3695|Obsoleto.|
|Errore del compilatore C3696|'*keyword*': Impossibile utilizzare questo qualificatore in '%'|
|[Errore del compilatore C3697](compiler-error-c3697.md)|'*keyword*': Impossibile utilizzare questo qualificatore in ' ^'|
|[Errore del compilatore C3698](compiler-error-c3698.md)|'*Type*': non è possibile usare questo tipo come argomento di '*operator*'|
|[Errore del compilatore C3699](compiler-error-c3699.md)|'*operator*': non è possibile usare questo riferimento indiretto nel tipo '*Type*'|
|Errore del compilatore C3700|Obsoleto.|
|[Errore del compilatore C3701](compiler-error-c3701.md)|'*Function*': l'origine evento non ha eventi|
|[Errore del compilatore C3702](compiler-error-c3702.md)|ATL è necessario per gli eventi COM|
|[Errore del compilatore C3703](compiler-error-c3703.md)|'*event_handler*': un metodo del gestore eventi deve avere la stessa classe di archiviazione dell'origine '*Event*'|
|[Errore del compilatore C3704](compiler-error-c3704.md)|'*member*': un metodo vararg non può generare eventi|
|[Errore del compilatore C3705](compiler-error-c3705.md)|'*Function*': Impossibile trovare l'interfaccia di eventi|
|[Errore del compilatore C3706](compiler-error-c3706.md)|'*Function*': deve essere un'interfaccia com per generare eventi com|
|[Errore del compilatore C3707](compiler-error-c3707.md)|'*member*': il metodo di interfaccia dispatch deve avere un DISPID|
|[Errore del compilatore C3708](compiler-error-c3708.md)|'*Function*': uso improprio di '*keyword*'; deve essere un membro di un'origine evento compatibile|
|[Errore del compilatore C3709](compiler-error-c3709.md)|'*Function*': sintassi non corretta per specificare l'evento in __hook/__unhook|
|[Errore del compilatore C3710](compiler-error-c3710.md)|'*Function*': sintassi non corretta per specificare il gestore eventi in __hook/__unhook|
|[Errore del compilatore C3711](compiler-error-c3711.md)|'*Event*': un metodo di origine eventi non gestito deve restituire void o un tipo integrale|
|[Errore del compilatore C3712](compiler-error-c3712.md)|'*event_handler*': un metodo del gestore eventi deve restituire lo stesso tipo dell'origine '*Event*'|
|[Errore del compilatore C3713](compiler-error-c3713.md)|'*event_handler*': un metodo del gestore eventi deve avere gli stessi parametri di funzione dell'origine '*Event*'|
|[Errore del compilatore C3714](compiler-error-c3714.md)|'*event_handler*': un metodo del gestore eventi deve avere la stessa convenzione di chiamata dell'origine '*Event*'|
|[Errore del compilatore C3715](compiler-error-c3715.md)|'*pointer*': deve essere un puntatore a'*Type*'|
|Errore del compilatore C3716|Obsoleto.|
|[Errore del compilatore C3717](compiler-error-c3717.md)|'*member*': non è possibile definire un metodo che genera eventi|
|[Errore del compilatore C3718](compiler-error-c3718.md)|è possibile chiamare ' _ _*keyword*' solo nel contesto di una funzione membro della classe ricevente|
|[Errore del compilatore C3719](compiler-error-c3719.md)|'*member*': un'origine evento basata su interfaccia può essere usata solo per gli eventi com|
|Errore del compilatore C3720|'*Type*': può implementare IDispatch solo su un'interfaccia dispatch o duale|
|[Errore del compilatore C3721](compiler-error-c3721.md)|'*Signature*': firma non compatibile per l'evento|
|[Errore del compilatore C3722](compiler-error-c3722.md)|evento generico non consentito|
|[Errore del compilatore C3723](compiler-error-c3723.md)|'*Function*': Impossibile risolvere l'evento|
|[Errore del compilatore C3724](compiler-error-c3724.md)|è necessario #include \<> Windows. h per utilizzare il multithreading con gli eventi|
|Errore del compilatore C3725|Obsoleto.|
|Errore del compilatore C3726|Obsoleto.|
|[Errore del compilatore C3727](compiler-error-c3727.md)|'*Event*': un evento gestito deve essere una funzione membro o un membro dati che è un puntatore a un delegato|
|[Errore del compilatore C3728](compiler-error-c3728.md)|'*Event*': l'evento non ha un metodo Raise|
|Errore del compilatore C3729|Obsoleto.|
|Errore del compilatore C3730|Obsoleto.|
|[Errore del compilatore C3731](compiler-error-c3731.md)|evento '*Event*' e gestore '*event_handler*' incompatibili; l'origine evento e il gestore eventi devono avere lo stesso tipo di evento|
|[Errore del compilatore C3732](compiler-error-c3732.md)|'*Interface*': un'interfaccia personalizzata che genera eventi com non può ereditare da IDispatch|
|[Errore del compilatore C3733](compiler-error-c3733.md)|'*Event*': sintassi non corretta per la specifica di un evento com; si è omesso ' __interface '?|
|[Errore del compilatore C3734](compiler-error-c3734.md)|'*Class*': una classe gestita/WinRT non può essere una coclasse|
|Errore del compilatore C3735|Obsoleto.|
|[Errore del compilatore C3736](compiler-error-c3736.md)|'*member*': deve essere un metodo o, nel caso di eventi gestiti, facoltativamente un membro dati|
|[Errore del compilatore C3737](compiler-error-c3737.md)|'*Identifier*': un delegato non può avere una convenzione di chiamata esplicita|
|[Errore del compilatore C3738](compiler-error-c3738.md)|'*Convention*': la convenzione di chiamata della creazione di istanza esplicita deve corrispondere a quella del modello di cui viene creata un'istanza|
|[Errore del compilatore C3739](compiler-error-c3739.md)|'*Class*': la sintassi è supportata solo quando il parametro ' layout\_dipendente ' di event_receiver è true|
|[Errore del compilatore C3740](compiler-error-c3740.md)|'*template*': i modelli non possono avere origine o ricevere eventi|
|[Errore del compilatore C3741](compiler-error-c3741.md)|'*Class*': deve essere una coclasse quando il parametro ' layout\_dipendente ' di event_receiver è true|
|Errore del compilatore C3742|'*token1*': sequenza di token sbilanciata nell'argomento Attribute di '*attribute*'. previsto '*token2*'|
|[Errore del compilatore C3743](compiler-error-c3743.md)|può solo collegare o scollegare un'intera interfaccia quando il parametro ' layout_dependent ' di event_receiver è true|
|[Errore del compilatore C3744](compiler-error-c3744.md)|__unhook deve avere almeno 3 argomenti per gli eventi gestiti|
|[Errore del compilatore C3745](compiler-error-c3745.md)|'*Function*': solo un evento può essere ' raised '|
|Errore del compilatore C3746|l'attributo standard '*Identifier*' può essere visualizzato al massimo una volta in un elenco di attributi|
|[Errore del compilatore C3747](compiler-error-c3747.md)|parametro generico o modello predefinito mancante: parametro *Number*|
|[Errore del compilatore C3748](compiler-error-c3748.md)|'*Interface*': le interfacce non gestite non possono generare eventi|
|[Errore del compilatore C3749](compiler-error-c3749.md)|'*attribute*': non è possibile usare un attributo personalizzato all'interno di una funzione|
|Errore del compilatore C3750|'*token*': token imprevisto nell'elenco di attributi|
|Errore del compilatore C3751|'*Identifier*': identificatore imprevisto nell'elenco di attributi|
|[Errore del compilatore C3752](compiler-error-c3752.md)|'*attribute*': Impossibile classificare l'attributo; '*keyword*' non deve essere usato in questo contesto|
|[Errore del compilatore C3753](compiler-error-c3753.md)|Proprietà generica non consentita|
|[Errore del compilatore C3754](compiler-error-c3754.md)|Costruttore di delegato: non è possibile chiamare la funzione membro '*member*' su un'istanza di tipo '*Type*'|
|[Errore del compilatore C3755](compiler-error-c3755.md)|'*Identifier*': non è possibile definire un delegato|
|Errore del compilatore C3756|Obsoleto.|
|Errore del compilatore C3757|'*Type*': tipo non consentito per la funzione ' constExpr '|
|Errore del compilatore C3758|'*member*': la funzione virtuale non può essere dichiarata come ' constExpr '|
|Errore del compilatore C3759|'*member*': la funzione membro di tipo non letterale non può essere dichiarata come ' constExpr '|
|Errore del compilatore C3760|usare __property parola chiave per dichiarare la proprietà in Managed/WinRT '*Class*'|
|[Errore del compilatore C3761](compiler-error-c3761.md)|'*Function*':' retval ' può apparire solo nell'ultimo argomento di una funzione|
|[Errore del compilatore C3762](compiler-error-c3762.md)|Impossibile elaborare l'attributo '*attribute*'|
|[Errore del compilatore C3763](compiler-error-c3763.md)|'*Type*':' retval ' è out ' possono essere visualizzati solo in un tipo di puntatore a dati|
|[Errore del compilatore C3764](compiler-error-c3764.md)|'*member*': Impossibile eseguire l'override del metodo della classe base '*member*'|
|[Errore del compilatore C3765](compiler-error-c3765.md)|'*Event*': non è possibile definire un evento in una classe/struct '*Type*' contrassegnata come event_receiver|
|[Errore del compilatore C3766](compiler-error-c3766.md)|'*Type*' deve fornire un'implementazione per il metodo di interfaccia '*Function*'|
|[Errore del compilatore l'errore C3767](compiler-error-c3767.md)|'*Function*': funzione o funzioni candidate non accessibili|
|[Errore del compilatore C3768](compiler-error-c3768.md)|Impossibile prendere l'indirizzo di una funzione vararg virtuale in codice gestito pure|
|[Errore del compilatore C3769](compiler-error-c3769.md)|'*Identifier*': una classe annidata non può avere lo stesso nome della classe che lo contiene immediatamente|
|Errore del compilatore C3770|'*Type*': non è una classe di base valida|
|[Errore del compilatore C3771](compiler-error-c3771.md)|'*Identifier*': Impossibile trovare la dichiarazione friend nell'ambito dello spazio dei nomi più vicino|
|[Errore del compilatore C3772](compiler-error-c3772.md)|'*Identifier*': dichiarazione di modello friend non valida|
|Errore del compilatore C3773|usare l'opzione del compilatore/await per abilitare le coroutine|
|Errore del compilatore C3774|non è possibile trovare '*scope*::*Identifier*': includere l'intestazione dell' *intestazione*|
|Errore del compilatore C3775|il tipo restituito di '*Function*' non deve essere '*Type*'|
|Errore del compilatore C3776|non è possibile restituire un espressione di tipo void in una coroutine con un tipo restituito finale non void|
|Errore del compilatore C3777|'*Function*': una coroutine non può prendere un elenco di argomenti variabile|
|Errore del compilatore C3778|alloca: non può essere usato in una coroutine|
|Errore del compilatore C3779|'*Function*': una funzione che restituisce '*Type*' non può essere usata prima che sia definita|
|Errore del compilatore C3780|'*Function*': una funzione di conversione che restituisce '*Type*' non può essere usata prima che sia definita|
|Errore del compilatore C3781|'*keyword*': non può essere usato in una coroutine di tipo '*Type*'. È necessario che la *parola chiave* o la *parola chiave* sia presente nell'oggetto associato promise_type|
|Errore del compilatore C3782|*tipo*: la promessa di una coroutine non può contenere sia *parole chiave* che *parole chiave*|
|Errore del compilatore C3783|'*Identifier*': non può essere una coroutine|
|Errore del compilatore C3784|l'espressione *parola chiave* non può essere presente in questo contesto|
|Errore del compilatore C3785|il primo argomento del modello di ' std:: integer_sequence ' deve essere un tipo Integer|
|Errore del compilatore C3786|il secondo argomento di modello di ' std:: make_integer_sequence ' deve essere una costante integer maggiore o uguale a zero|
|Errore del compilatore C3787|non è possibile dedurre il tipo restituito di questa coroutine|
|Errore del compilatore C3788|Obsoleto.|
|Errore del compilatore C3789|Obsoleto.|
|Errore del compilatore C3790|Obsoleto.|
|Errore del compilatore C3791|Obsoleto.|
|Errore del compilatore C3792|Obsoleto.|
|Errore del compilatore C3793|Obsoleto.|
|Errore del compilatore C3794|Obsoleto.|
|Errore del compilatore C3795|Obsoleto.|
|Errore del compilatore C3796|Obsoleto.|
|[Errore del compilatore C3797](compiler-error-c3797.md)|'*keyword*': la dichiarazione di evento non può avere un identificatore di override (deve essere posizionata in metodi Add/Remove/Raise di evento)|
|[Errore del compilatore C3798](compiler-error-c3798.md)|'*keyword*': la dichiarazione di proprietà non può avere un identificatore di override (deve essere inserita in metodi get/set di proprietà)|
|[Errore del compilatore C3799](compiler-error-c3799.md)|la proprietà indicizzata non può avere un elenco di parametri vuoto|
|[Errore del compilatore C3800](compiler-error-c3800.md)|'*Declaration*': Impossibile combinare proprietà ed eventi|
|Errore del compilatore C3801|'*attribute*': l'attributo non può avere una clausola argument|
|Errore del compilatore C3802|Obsoleto.|
|[Errore del compilatore C3803](compiler-error-c3803.md)|'*Property*': la proprietà ha un tipo non compatibile con una delle relative funzioni di accesso '*funzione*di accesso '|
|[Errore del compilatore C3804](compiler-error-c3804.md)|'*member*': i metodi della funzione di accesso per una proprietà devono essere tutti statici o tutti non statici|
|[Errore del compilatore C3805](compiler-error-c3805.md)|'*token*': token imprevisto. previsto '}' o ','|
|Errore del compilatore C3806|'*token*': token imprevisto. previsto ' {' o un inizializzatore di membro|
|[Errore del compilatore C3807](compiler-error-c3807.md)|'*Type*': una classe con l'attributo ComImport non può derivare da'*Type*'. è consentita solo l'implementazione dell'interfaccia|
|[Errore del compilatore C3808](compiler-error-c3808.md)|'*Type*': una classe con l'attributo ComImport non può definire il membro '*member*'. sono consentite solo le funzioni abstract o dllimport|
|[Errore del compilatore C3809](compiler-error-c3809.md)|'*Type*': un tipo gestito/WinRT non può avere funzioni/classi/interfacce friend|
|Errore del compilatore C3810|Obsoleto.|
|Errore del compilatore C3811|Obsoleto.|
|[Errore del compilatore C3812](compiler-error-c3812.md)|' __property ' deve essere il primo token in una dichiarazione di proprietà|
|[Errore del compilatore C3813](compiler-error-c3813.md)|una dichiarazione di proprietà può essere presente solo all'interno della definizione di un tipo gestito/WinRT|
|Errore del compilatore C3814|Obsoleto.|
|[Errore del compilatore C3815](compiler-error-c3815.md)|il tipo restituito del metodo '*member*' deve corrispondere al tipo dell'ultimo parametro di un setter|
|[Errore del compilatore C3816](compiler-error-c3816.md)|' Class/struct *member*' è stato dichiarato o definito in precedenza con un modificatore gestito/WinRT diverso|
|[Errore del compilatore C3817](compiler-error-c3817.md)|'*Declaration*': la proprietà può essere applicata solo a una funzione|
|[Errore del compilatore C3818](compiler-error-c3818.md)|la dichiarazione di proprietà'*Property*' della matrice non deve eseguire l'overload di una proprietà di indice '*Property*'|
|Errore del compilatore C3819|Obsoleto.|
|[Errore del compilatore C3820](compiler-error-c3820.md)|'*Identifier*': gli inizializzatori devono essere gestiti|
|[Errore del compilatore C3821](compiler-error-c3821.md)|'*Function*': Impossibile utilizzare un tipo o una funzione gestita in una funzione non gestita|
|Errore del compilatore C3822|Obsoleto.|
|Errore del compilatore C3823|Obsoleto.|
|[Errore del compilatore C3824](compiler-error-c3824.md)|'*Type*': questo tipo non può essere presente in questo contesto (parametro di funzione, tipo restituito o membro statico)|
|[Errore del compilatore C3825](compiler-error-c3825.md)|'*Type*': una classe gestita/WinRT può supportare solo eventi gestiti/WinRT|
|Errore del compilatore C3826|Obsoleto.|
|Errore del compilatore C3827|l'attributo standard ' deprecated ' può non contenere argomenti o un valore letterale stringa che descrive il motivo|
|[Errore del compilatore C3828](compiler-error-c3828.md)|non è possibile specificare gli argomenti di posizionamento per un'espressione '*keyword*' per il tipo '*Type*'|
|Errore del compilatore C3829|l'attributo standard ' noreturn ' può essere applicato solo alle funzioni|
|[Errore del compilatore C3830](compiler-error-c3830.md)|'*tipo1*': Impossibile ereditare da'*tipo2*'. i tipi di valore possono ereditare solo da classi di interfaccia|
|[Errore del compilatore C3831](compiler-error-c3831.md)|'*Identifier*':'*Type*' non può avere un membro dati bloccato o una funzione membro che restituisce un puntatore di blocco|
|[Errore del compilatore C3832](compiler-error-c3832.md)|'*typelib*': la libreria dei tipi appare come se fosse stata compilata per puntatori a 32 bit; modificare il qualificatore ' ptrsize '|
|[Errore del compilatore C3833](compiler-error-c3833.md)|'*Type*': tipo di destinazione non valido per l' *identificatore*|
|[Errore del compilatore C3834](compiler-error-c3834.md)|cast esplicito non valido a un puntatore di blocco; usare invece una variabile locale bloccata|
|Errore del compilatore C3835|Obsoleto.|
|[Errore del compilatore C3836](compiler-error-c3836.md)|un costruttore statico non può avere un elenco di inizializzatori di membri|
|Errore del compilatore C3837|attributi non consentiti in questo contesto|
|[Errore del compilatore C3838](compiler-error-c3838.md)|Impossibile ereditare da'*Type*'|
|[Errore del compilatore C3839](compiler-error-c3839.md)|Impossibile modificare l'allineamento in un tipo gestito/WinRT|
|Errore del compilatore C3840|Obsoleto.|
|Errore del compilatore C3841|Obsoleto.|
|[Errore del compilatore C3842](compiler-error-c3842.md)|'*Identifier*': qualificatori ' const ' è volatile ' su funzioni membro di tipi gestiti/WinRT non supportati|
|Errore del compilatore C3843|'*Identifier*': i qualificatori di riferimento per le funzioni membro di tipi gestiti/WinRT non sono supportati|
|Errore del compilatore C3844|'*Identifier*': non è possibile importare il simbolo da'*source*': perché'*Identifier*' esiste già nell'ambito corrente|
|Errore del compilatore C3845|Obsoleto.|
|[Errore del compilatore C3846](compiler-error-c3846.md)|'*Identifier*': Impossibile importare il simbolo da'*source*': perché'*Identifier*' è già stato importato da un altro assembly '*assembly*'|
|Errore del compilatore C3847|Obsoleto.|
|[Errore del compilatore C3848](compiler-error-c3848.md)|l'espressione con tipo '*Type*' potrebbe perdere alcuni qualificatori const-volatile per chiamare '*Identifier*'|
|[Errore del compilatore C3849](compiler-error-c3849.md)|la chiamata di tipo funzione su un'espressione di tipo '*Type*' comporta la perdita di qualificatori const e/o volatili per tutti gli overload di operatori disponibili per tutti i *numeri*|
|[Errore del compilatore C3850](compiler-error-c3850.md)|'*token*': un nome di caratteri universali specifica un carattere non valido|
|[Errore del compilatore C3851](compiler-error-c3851.md)|'*token*': un nome di caratteri universali non può definire un carattere nel set di caratteri di base|
|[Errore del compilatore C3852](compiler-error-c3852.md)|'*member*' con tipo '*Type*': l'inizializzazione aggregata non è riuscita a inizializzare il membro|
|[Errore del compilatore C3853](compiler-error-c3853.md)|' =': non è consentito reinizializzare un riferimento o un'assegnazione mediante un riferimento a funzione|
|[Errore del compilatore C3854](compiler-error-c3854.md)|l'espressione a sinistra di ' =' restituisce una funzione. Non è possibile assegnare a una funzione (una funzione non è un l-value)|
|[Errore del compilatore C3855](compiler-error-c3855.md)|'*Function*': il parametro template/Generic '*Identifier*' non è compatibile con la dichiarazione|
|[Errore del compilatore C3856](compiler-error-c3856.md)|'*Class*': la classe non è un modello di classe/generico|
|[Errore del compilatore C3857](compiler-error-c3857.md)|'*template*': non sono consentiti più elenchi di modelli/parametri generici|
|[Errore del compilatore C3858](compiler-error-c3858.md)|'*Identifier*': non può essere ridichiarato nell'ambito corrente|
|[Errore del compilatore C3859](compiler-error-c3859.md)|è stato superato l'intervallo di memoria virtuale per PCH; ricompilare con un'opzione della riga di comando di '-ZM*Number*' o versione successiva|
|[Errore del compilatore C3860](compiler-error-c3860.md)|elenco di argomenti generici/modello seguente il modello di classe o il nome generico deve elencare i parametri nell'ordine usato nell'elenco di parametri di modello/generico|
|[Errore del compilatore C3861](compiler-error-c3861.md)|'*Identifier*': identificatore non trovato|
|[Errore del compilatore C3862](compiler-error-c3862.md)|'*Function*': Impossibile compilare una funzione non gestita con/CLR: pure o/CLR: safe|
|Errore del compilatore C3863|il tipo di matrice '*Type*' non è assegnabile|
|Errore del compilatore C3864|Obsoleto.|
|[Errore del compilatore C3865](compiler-error-c3865.md)|'*keyword*': può essere usato solo su funzioni membro Native|
|[Errore del compilatore C3866](compiler-error-c3866.md)|elenco di argomenti mancanti nella chiamata al distruttore/finalizzatore|
|[Errore del compilatore C3867](compiler-error-c3867.md)|'*Function*': sintassi non standard; usare ' &' per creare un puntatore al membro|
|[Errore del compilatore C3868](compiler-error-c3868.md)|'*Type*': i vincoli sul parametro generico '*Parameter*' differiscono da quelli della dichiarazione|
|[Errore del compilatore C3869](compiler-error-c3869.md)|nel vincolo gcnew manca l'elenco di parametri vuoto ' ()'|
|Errore del compilatore C3870|'*Parameter*':' __declspec (*identificatore*)' può essere applicato solo a parametri di tipo integrale|
|Errore del compilatore C3871|'*Parameter*':' __declspec (Guard (overflow))' è supportato solo nei primi 64 parametri di una funzione|
|[Errore del compilatore C3872](compiler-error-c3872.md)|' 0x*value*': questo carattere non è consentito in un identificatore|
|[Errore del compilatore C3873](compiler-error-c3873.md)|' 0x*value*': questo carattere non è consentito come primo carattere di un identificatore|
|[Errore del compilatore C3874](compiler-error-c3874.md)|il tipo restituito di '*Identifier*' deve essere '*tipo1*' anziché'*tipo2*'|
|Errore del compilatore C3875|chiamata della funzione membro non statica mancante nell'elenco di argomenti|
|Errore del compilatore C3876|Obsoleto.|
|Errore del compilatore C3877|Obsoleto.|
|Errore del compilatore C3878|Obsoleto.|
|Errore del compilatore C3879|'*member*': non può essere un membro dati initonly|
|[Errore del compilatore C3880](compiler-error-c3880.md)|'*member*': non può essere un membro dati literal|
|Errore del compilatore C3881|può solo ereditare il costruttore dalla base diretta|
|Errore del compilatore C3882|'*Class*': il costruttore è già stato ereditato da'*Class*'|
|Errore del compilatore C3883|'*member*': un membro dati statico initonly deve essere inizializzato|
|Errore del compilatore C3884|'*Type*': una matrice di dimensioni sconosciute non può essere inizializzata dal valore|
|Errore del compilatore C3885|'*Type*': non è possibile inizializzare una matrice di dimensioni sconosciute con un elenco di inizializzatori vuoto|
|[Errore del compilatore C3886](compiler-error-c3886.md)|'*member*': un membro dati literal deve essere inizializzato|
|[Errore del compilatore C3887](compiler-error-c3887.md)|'*member*': l'inizializzatore per un membro dati literal deve essere un'espressione costante|
|[Errore del compilatore C3888](compiler-error-c3888.md)|'*member*': l'espressione const associata a questo membro dati literal non è supportata C++da/CLI|
|Errore del compilatore C3889|Obsoleto.|
|[Errore del compilatore C3890](compiler-error-c3890.md)|'*member*': impossibile prendere l'indirizzo di un membro dati literal|
|[Errore del compilatore C3891](compiler-error-c3891.md)|'*member*': Impossibile utilizzare un membro dati literal come l-value|
|[Errore del compilatore C3892](compiler-error-c3892.md)|'*Variable*': non è possibile assegnare a una variabile const|
|[Errore del compilatore C3893](compiler-error-c3893.md)|'*member*': utilizzo l-value del membro dati initonly consentito solo in un costruttore di istanza della classe '*Class*'|
|[Errore del compilatore C3894](compiler-error-c3894.md)|'*member*': utilizzo l-value del membro dati statico initonly consentito solo nel costruttore della classe '*Class*'|
|[Errore del compilatore C3895](compiler-error-c3895.md)|'*member*': i membri dati di *tipo* non possono essere ' volatile '|
|[Errore del compilatore C3896](compiler-error-c3896.md)|'*member*': inizializzatore non corretto: questo membro dati literal può essere inizializzato solo con ' nullptr '|
|Errore del compilatore C3897|Obsoleto.|
|[Errore del compilatore C3898](compiler-error-c3898.md)|'*member*': i membri dati di *tipo* possono essere solo membri di tipi gestiti|
|[Errore del compilatore C3899](compiler-error-c3899.md)|'*member*': utilizzo l-value del membro dati initonly non consentito direttamente in un'area parallela della classe '*Class*'|
|[Errore del compilatore C3900](compiler-error-c3900.md)|'*member*': non consentito nell'ambito corrente|
|[Errore del compilatore C3901](compiler-error-c3901.md)|'*Function*': deve avere il tipo restituito '*Type*'|
|[Errore del compilatore C3902](compiler-error-c3902.md)|'*Function*': il tipo dell'ultimo parametro deve essere '*Type*'|
|[Errore del compilatore C3903](compiler-error-c3903.md)|'*Property*': non ha un metodo set o Get|
|[Errore del compilatore C3904](compiler-error-c3904.md)|'*Property*': è necessario specificare i parametri *numerici*|
|Errore del compilatore C3905|accessi non allineati non supportati per il tipo intrinseco '*Type*'|
|Errore del compilatore C3906|il tipo intrinseco '*Type*' non è un tipo restituito o di argomento supportato per le funzioni vararg o senza prototipo|
|Errore del compilatore C3907|Obsoleto.|
|[Errore del compilatore C3908](compiler-error-c3908.md)|livello di accesso meno restrittivo di quello di '*Identifier*'|
|[Errore del compilatore C3909](compiler-error-c3909.md)|una dichiarazione di evento gestito/WinRT deve verificarsi in un tipo gestito/WinRT|
|[Errore del compilatore C3910](compiler-error-c3910.md)|'*Event*': deve definire il membro '*member*'|
|[Errore del compilatore C3911](compiler-error-c3911.md)|'*member*': la funzione deve avere il tipo '*Type*'|
|[Errore del compilatore C3912](compiler-error-c3912.md)|'*Event*': il tipo di evento deve essere un tipo delegato|
|[Errore del compilatore C3913](compiler-error-c3913.md)|una proprietà predefinita deve essere indicizzata|
|[Errore del compilatore C3914](compiler-error-c3914.md)|una proprietà predefinita non può essere statica|
|[Errore del compilatore C3915](compiler-error-c3915.md)|'*Identifier*' non ha una proprietà indicizzata predefinita (indicizzatore di classe)|
|Errore del compilatore C3916|Obsoleto.|
|[Errore del compilatore C3917](compiler-error-c3917.md)|'*token*': stile di Dichiarazione *costrutto* obsoleto (si intendeva usare ' ['']'?)|
|[Errore del compilatore C3918](compiler-error-c3918.md)|per l'utilizzo è necessario che "*Identifier*" sia un membro dati|
|[Errore del compilatore C3919](compiler-error-c3919.md)|'*Function*': la funzione deve avere il tipo '*return_type* (*Type*)'|
|[Errore del compilatore C3920](compiler-error-c3920.md)|'*operator*': non è possibile definire un operatore CLR/WinRT di incremento/decremento suffisso che chiama l'operatore suffisso CLR/WinRT chiamerà il prefisso corrispondente operatore CLR/WinRT (op_Increment/op_Decrement), ma con la semantica suffissa|
|Errore del compilatore C3921|Obsoleto.|
|Errore del compilatore C3922|Obsoleto.|
|[Errore del compilatore C3923](compiler-error-c3923.md)|'*member*': le definizioni di classe, struct o Union locali non sono consentite in una funzione membro di una classe gestita/WinRT|
|Errore del compilatore C3924|errore nell'argomento #*numero* della chiamata al costruttore di delegato '*Constructor*':|
|Errore del compilatore C3925|previsto un ciclo (for, while o do) dopo la direttiva '*Directive*'|
|Errore del compilatore C3926|costante non valida nella direttiva ' Parallel '|
|Errore del compilatore C3927|'->': il tipo restituito finale non è consentito dopo un dichiaratore non di funzione|
|Errore del compilatore C3928|'->': il tipo restituito finale non è consentito dopo un dichiaratore tra parentesi|
|Errore del compilatore C3929|Obsoleto.|
|Errore del compilatore C3930|'*Function*': nessuna funzione in overload presenta indicatori di restrizione compatibili con il contesto di ambiente '*context*'|
|Errore del compilatore C3931|'*Type*': Impossibile chiamare una funzione con indicatori di restrizione non compatibili con il contesto di ambiente|
|Errore del compilatore C3932|Obsoleto.|
|Errore del compilatore C3933|'*Class*': gli identificatori di restrizione del distruttore devono coprire l'Unione delle restrizioni in tutti i costruttori|
|Errore del compilatore C3934|una funzione in qualsiasi formato di ' Main ' non può avere identificatori di restrizione diversi da restrict (CPU)|
|Errore del compilatore C3935|'*Identifier*': ridefinizione. identificatori di restrizione sovrapposti|
|Errore del compilatore C3936|'*Identifier*': identificatore di restrizione non riconosciuto|
|Errore del compilatore C3937|identificatore di restrizione vuoto non consentito|
|Errore del compilatore C3938|'*Identifier*': più identificatori di restrizione non supportati nelle funzioni \042C\042 extern|
|Errore del compilatore C3939|'*Identifier*': puntatore a funzioni membro, puntatori a funzione, riferimenti a funzioni con identificatore di restrizione ' amp ' non consentiti|
|Errore del compilatore C3940|'*Identifier*': identificatore non trovato-possibile mancata corrispondenza tra le versioni del compilatore e della libreria. Verificare che vccorlib. h/. lib, vccorlib120. dll e c1xx. dll corrispondano|
|Errore del compilatore C3941|'*Condition*': richiede l'opzione della riga di comando '/CLR '|
|Errore del compilatore C3942|Obsoleto.|
|Errore del compilatore C3943|Obsoleto.|
|Errore del compilatore C3944|Obsoleto.|
|Errore del compilatore C3945|'*Type*': non è possibile generare o intercettare un oggetto WinRT che non deriva da Platform:: Exception|
|Errore del compilatore C3946|'*Type*': typeid non può essere applicato a questo tipo|
|Errore del compilatore C3947|'*typeid*': typeid non può essere applicato a un'espansione di pacchetto|
|Errore del compilatore C3948|'*keyword*': un'espansione di pacchetto non può essere presente in questo contesto|
|Errore del compilatore C3949|un'espansione di pacchetto,'.. .', non può comparire in un dichiaratore astratto tra parentesi|
|Errore del compilatore C3950|Obsoleto.|
|Errore del compilatore C3951|Non è possibile usare il puntatore a membro nel tipo WinRT proiettato '*Type*'. Usare invece un delegato.|
|Errore del compilatore C3952|'*Type*': WinRT non supporta le matrici ' in/out '. Usare ' const array\<T > ^' per ' in ' è WriteOnlyArray\<T >' o ' Array\<T > ^ *' per ' out ' nelle API pubbliche|
|Errore del compilatore C3953|Non è possibile usare la classe gestità*Type*' nel modulo WinRT.|
|Errore del compilatore C3954|'*Type*': una matrice restituita da un metodo pubblicato in un tipo WinRT deve utilizzare il formato ' Array\<t > ^'|
|Errore del compilatore C3955|'*Type*': un costruttore pubblico non può contenere un parametro ' out ' o ' WriteOnlyArray\<t >'|
|Errore del compilatore C3956|'*Type*': il tipo è contrassegnato come esclusivo di '*Type*' e non può essere usato come base di '*derived_type*'|
|Errore del compilatore C3957|'*Type*': non è possibile usare ' New ' in un tipo WinRT; USA invece ' ref new '|
|Errore del compilatore C3958|'*Type*': non è possibile usare ' gcnew ' in un tipo WinRT. USA invece ' ref new '|
|Errore del compilatore C3959|' ref new ' può essere utilizzato solo per creare un oggetto con tipo WinRT|
|Errore del compilatore C3960|Obsoleto.|
|Errore del compilatore C3961|Costruttore statico non supportato|
|Errore del compilatore C3962|classe generica non supportata|
|Errore del compilatore C3963|matrice multidimensionale non supportata|
|Errore del compilatore C3964|matrice di matrici non supportata|
|Errore del compilatore C3965|matrice di parametri non supportata|
|Errore del compilatore C3966|'*Function*': funzione generica non supportata|
|Errore del compilatore C3967|errore durante l'importazione di '*Identifier*' dal modulo '*Module*'|
|Errore del compilatore C3968|il token '*token*' non è valido come separatore del nome del modulo. usare invece il punto (' .')|
|Errore del compilatore C3969|nomi di modulo incoerenti:'*Module1*' è*Module1*'|
|Errore del compilatore C3970|'*Identifier*':'*keyword*' può essere applicato solo a' ref class ' o a' ref struct ' nell'ambito globale o nello spazio dei nomi|
|Errore del compilatore C3971|'*Type*': la definizione parziale non può comparire dopo la definizione completa|
|Errore del compilatore C3972|'*Type*':' Partial ' può essere applicato solo a definizioni o dichiarazioni di classe|
|Errore del compilatore C3973|Obsoleto.|
|Errore del compilatore C3974|Obsoleto.|
|Errore del compilatore C3975|' Class/struct *Identifier*' è stato dichiarato o definito in precedenza con un modificatore diverso|
|Errore del compilatore C3976|'*identificatore1*' deve essere dichiarato come ' Public ' per poter usare '*identifier2*'|
|Errore del compilatore C3977|L'utilizzo richiede un riferimento a un assembly che definisce '*Identifier*'|
|Errore del compilatore C3978|'*Identifier*': una proprietà statica non è consentita come membro di un'interfaccia o di un tipo di valore WinRT|
|Errore del compilatore C3979|'*Type*': usare l'attributo '*attribute*' anziché'*value*'|
|Errore del compilatore C3980|'*Type*' non può essere emesso nei metadati|
|Errore del compilatore C3981|'*Type*': un tipo di valore non può avere membri dati statici '*Identifier*'|
|Errore del compilatore C3982|'*Type*': un tipo di valore non può avere membri di dati non pubblici '*Identifier*'|
|Errore del compilatore C3983|'*Type*': un tipo di valore non può avere membri non di dati pubblici '*Identifier*'|
|Errore del compilatore C3984|'*Type*': un tipo non di valore non può avere membri di dati pubblici '*Identifier*'|
|Errore del compilatore C3985|'*Identifier*': la firma del membro pubblico contiene un tipo privato '*member*'|
|Errore del compilatore C3986|'*Identifier*': la firma del membro pubblico contiene un tipo nativo '*member*'|
|Errore del compilatore C3987|'*Identifier*': la firma del membro pubblico contiene un tipo nativo '*Type*'|
|Errore del compilatore C3988|'*Type*': un tipo nativo non può essere pubblico|
|Errore del compilatore C3989|'*Type*': un tipo annidato non può essere pubblico|
|Errore del compilatore C3990|'*Type*': l'attributo '*attribute*' non può essere privato o annidato|
|Errore del compilatore C3991|'*Type*': non è possibile implementare un'interfaccia non pubblica o annidata '*Interface*'|
|Errore del compilatore C3992|'*Identifier*': la firma del membro pubblico contiene un tipo non valido '*Type*'|
|Errore del compilatore C3993|'*Type*': un tipo di valore deve contenere almeno un campo pubblico|
|Errore del compilatore C3994|'*Type*': un tipo di valore non può implementare interfacce o avere funzioni virtuali|
|Errore del compilatore C3995|'*Type*': un tipo di valore non può avere membri di evento '*Identifier*'|
|Errore del compilatore C3996|Obsoleto.|
|Errore del compilatore C3998|' c++*Version*': C++ versione non supportata. impostazione predefinita su' c++*Version*'|
|Errore del compilatore C3999|ERRORE sconosciuto per altre informazioni, scegliere supporto C++ tecnico dal menu? o aprire il file della Guida relativo al supporto tecnico|

## <a name="see-also"></a>Vedere anche

[Errori eC++ avvisi di C/compilatore e strumenti di compilazione](../compiler-errors-1/c-cpp-build-errors.md) \
[Errori del compilatore C2000-C3999](../compiler-errors-1/compiler-errors-c2000-c3999.md)
