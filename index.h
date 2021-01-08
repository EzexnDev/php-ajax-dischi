<!DOCTYPE html>
<html lang="en" dir="ltr">

<head>
    <meta charset="utf-8">
    <title>ex-dischi-musicali</title>
    <link rel="stylesheet" href="https://cdn.jsdelivr.net/npm/bootstrap@4.5.3/dist/css/bootstrap.min.css" integrity="sha384-TX8t27EcRE3e/ihU7zmQxVncDAy5uIKz4rEkgIXeMed4M0jlfIDPvg6uqKI2xXr2" crossorigin="anonymous">

    <!-- Font Awesome 5.15.1 (CDN) -->
    <link rel="stylesheet" href="https://cdnjs.cloudflare.com/ajax/libs/font-awesome/5.15.1/css/all.min.css" integrity="sha512-+4zCK9k+qNFUR5X+cKL9EIR+ZOhtIloNl9GIKS57V1MyNsYpYcUrUeQc9vNfzsWfV28IaLL3i96P9sdNyeRssA==" crossorigin="anonymous" />

    <link rel="stylesheet" href="https://stackpath.bootstrapcdn.com/bootstrap/4.1.3/css/bootstrap.min.css">

    <!-- VueJS -->
    <!-- development version, includes helpful console warnings -->
    <script src="https://cdn.jsdelivr.net/npm/vue@2/dist/vue.js"></script>

    <script src="https://cdnjs.cloudflare.com/ajax/libs/axios/0.20.0/axios.min.js"></script>
    <!-- JS Frameworks -->

    <!-- jQuery 3.5.1 (CDN) -->
    <!-- <script src="https://code.jquery.com/jquery-3.5.1.js" integrity="sha256-QWo7LDvxbWT2tbbQ97B53yJnYU3WhH/C8ycbRAkjPDc=" crossorigin="anonymous"></script> -->

    <!-- Custom CSS -->
    <link rel="stylesheet" href="css/style.css">
</head>

<body>
    <header>
        <div class="container">
            <img src="logo.png" alt="logo" />

        </div>
    </header>

    <div class="cds-container container">
        <!-- <select class="custom-select" v-model='filterInput' @change=filterElements()>
            <option v-for='el in filteredGenres'>{{el}}</option>
          </select> -->
        <!-- Disco ad esempio -->
        <!-- <div class="cd" v-for='cd in filteredElements'>
            <img :src=cd.poster alt="">
            <h3>{{cd.genre}}</h3>
            <span class="author">{{cd.author}}</span>
            <span class="year">{{cd.year}}</span>
        </div> -->
    </div>



    <script src="js/main.js" charset="utf-8"></script>
</body>

</html>